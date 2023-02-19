// Юзгин Николай Игоревич

// Задание 3. Подсчитать количество слов
// во введенном предложении.

#include<iostream>
#include <string>

using namespace std;
int main() {
    system("chcp 65001");

    string str = "Кричат загонщики, и лают псы до рвоты";
    cout << "Исходная строка символов:" << endl;
    cout << str << endl;

    int count = 1;

    for (int i = 1; i < str.size(); ++i) {
        if ((str[i-1] == ' ') && (str[i] != ' ')) {
            count++;
        }
    }
    cout << "Количество слов во введенном предложении: " << count << endl;

    return 0;
}
