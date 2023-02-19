// Юзгин Николай Игоревич

// Задание 2. Дана строка символов.
// Определить количество букв, цифр и остальных символов,
// присутствующих в строке.

#include<iostream>
#include <string>

using namespace std;
int main() {
    system("chcp 65001");

    string str = "hgffjfj  hdhdh 238  !*% ^& ?? hggg 45   склад боеприпасов";
    cout << "Исходная строка символов:" << endl;
    cout << str << endl;
    int letter_count = 0;
    int digit_count = 0;

    for (int i = 0; i < str.size(); ++i) {
        int symbol_code = (int)str[i];
        if ((symbol_code >= 65) && (symbol_code <= 90) || (symbol_code >= 97) && (symbol_code <= 122)) {
            letter_count++;
        }
     }

    for (int i = 0; i < str.size(); ++i) {
        int symbol_code = (int)str[i];
        if ((symbol_code >= 48) && (symbol_code <= 57)) {
            digit_count++;
        }
    }

    cout << "Количество букв в строке: " << letter_count << endl;
    cout << "Количество цифр в строке: " << digit_count << endl;
    cout << "Количество остальных символов: " << str.size() - digit_count - letter_count << endl;

    return 0;
}
