// Юзгин Николай Игоревич

// Задание. Написать программу, которая хранит в файле даты рождения.
// Программа должна предоставлять пользователю возможность:
//- поиска дат по дню, месяцу или году;
//- добавления новых дат;
//- удаления дат;
//- выгрузки дат в новый файл;
//- подгрузки дат из другого файла.

#include <iostream>
#include <string>
#include <vector>

#include "FileServices.h"
#include "ConsoleServices.h"
#include "StringServices.h"

using namespace std;

int main() {
    system("chcp 65001");

    // string student;
    // string new_file;

    string day;
    string month;
    string year;
    string date;


    string path = "C:\\Users\\prost\\Desktop\\Programming\\C++\\hw_37\\dates_of_birth.dat";
    string path_new = "C:\\Users\\prost\\Desktop\\Programming\\C++\\hw_37\\date_of_birth_new.dat";
    string path_source = "C:\\Users\\prost\\Desktop\\Programming\\C++\\hw_37\\date_of_birth_source.dat";

    vector<string> data = ImportFromFile(path);

    bool exit = false;
    do {
        cout << "*** ДАТЫ РОЖДЕНИЯ ***" << endl;
        cout << "1. Показать все даты рождения" << endl;
        cout << "2. Показать даты рождения одного дня" << endl;
        cout << "3. Показать даты рождения одного месяца" << endl;
        cout << "4. Показать даты рождения одного года" << endl;
        cout << "5. Добавить новую дату рождения" << endl;
        cout << "6. Удалить дату рождения" << endl;
        cout << "7. Выгрузить дату рождения в новый файл" << endl;
        cout << "8. Подгрузить дату рождения из другого файла" << endl;
        cout << "0. Выход" << endl;

        char input;
        cout << "Введите номер задачи: ";
        cin >> input;

        switch (input) {
            case '1':
                PrintAll(data);
                break;
            case '2':
                FindDay(day, data);
                break;
            case '3':
                FindMonth(month, data);
                break;
            case '4':
                FindYear(year, data);
                break;
            case '5':
                data = AddDate(date, data);
                PrintAll(data);
                break;
            case '6':
                data = DeleteDate(date, data);
                PrintAll(data);
                break;
            case '7':
                ExportToFile(path_new, data);
                break;
            case '8':
                data = LoadingToFile(path_source, data);
                PrintAll(data);
                break;
            case '0':
                exit = true;
                break;
            default:
                cout << "Повторите ввод. Вы ввели неправильный номер задачи." << endl;
                break;
        }
    } while (!exit);

    cout << "До встречи!";
    ExportToFile(path, data);

    return 0;
}

