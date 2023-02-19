// Юзгин Николай Игоревич

// Задание 1. Дана строка символов.
// Заменить в ней все пробелы на табуляции.

#include<iostream>
#include <string>

using namespace std;
int main() {
    system("chcp 65001");

    string str = "hgffjfj  hdhdh 238  !*% ^& ?? hggg 45   склад боеприпасов";
    cout << "Исходная строка символов:" << endl;
    cout << str << endl;

    string str_1 = str;
    string str_2 = str;

    for (int i = 0; i < str_1.size(); ++i) {
        if (str_1[i] == ' ') {
            str_1[i] = '\t';
        }
    }
        cout << "Новая строка символов с горизонтальной табуляцией:" << endl;
        cout << str_1 << endl;

    for (int i = 0; i < str_2.size(); ++i) {
        if (str_2[i] == ' ') {
            str_2[i] = '\v';
        }
    }
    cout << "Новая строка символов с вертикальной табуляцией:" << endl;
    cout << str_2 << endl;

    return 0;
}

