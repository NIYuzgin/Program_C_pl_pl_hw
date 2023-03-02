#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void FindDay(string day, vector<string> data) {
    system("chcp 65001");
    int count = 0;

    do {
        cout << "Введите день (число) месяца в формате \"ДД\"- ";
        cin >> day;
        if (day.size() != 2) cout << "Неправильный формат даты!!! " << endl;
    } while (day.size() != 2);

    for (string s: data) {
        int pos = s.find('.');

        string s_day = s.substr(0,pos);
        if (s_day.find(day) != -1) {
            cout << s << endl;
            count = 1;
        }
    }
    if (count == 0) cout << "Такой даты НЕТ!" << endl;
}

void FindMonth(string month, vector<string> data) {
    system("chcp 65001");
    int count = 0;

    do {
        cout << "Введите месяц в формате \"ММ\"- ";
        cin >> month;
        if (month.size() != 2) cout << "Неправильный формат даты!!! " << endl;
    } while (month.size() != 2);

    for (string s: data) {
        int pos = s.find('.');

        string s_day = s.substr(pos + 1,pos + 3);
        if (s_day.find(month) != -1) {
            cout << s << endl;
            count = 1;
        }
    }
    if (count == 0) cout << "Такого месяца НЕТ!" << endl;
}

void FindYear(string year, vector<string> data) {
    system("chcp 65001");
    int count = 0;

    do {
        cout << "Введите год в формате \"ГГГГ\"- ";
        cin >> year;
        if (year.size() != 4) cout << "Неправильный формат даты!!! " << endl;
    } while (year.size() != 4);

    for (string s: data) {
        int pos = s.find('.');

        string s_day = s.substr(pos + 4);
        if (s_day.find(year) != -1) {
            cout << s << endl;
            count = 1;
        }
    }
    if (count == 0) cout << "Такого года НЕТ!" << endl;
}

vector<string> AddDate(string date, vector<string> data) {
    system("chcp 65001");

    int pos_1;
    int pos_2;

    do {
        cout << "Введите дату в формате \"ДД.ММ.ГГГГ\"- ";
        cin >> date;

        pos_1 = date.find('.');
        string s_date = date.substr(pos_1 + 1);
        pos_2 = s_date.find('.');

        if ((date.size() != 10) || (pos_1 != 2) || (pos_2 != 2)) cout << "Неправильный формат даты!!! " << endl;

    } while ((date.size() != 10) || (pos_1 != 2) || (pos_2 != 2));

    data.push_back(date);

    return data;
}

vector<string> DeleteDate(string date, vector<string> data) {
    system("chcp 65001");

    vector<string> temp;

    int pos_1;
    int pos_2;

    do {
        cout << "Введите дату в формате \"ДД.ММ.ГГГГ\"- ";
        cin >> date;

        pos_1 = date.find('.');
        string s_date = date.substr(pos_1 + 1);
        pos_2 = s_date.find('.');

        if ((date.size() != 10) || (pos_1 != 2) || (pos_2 != 2)) cout << "Неправильный формат даты!!! " << endl;

    } while ((date.size() != 10) || (pos_1 != 2) || (pos_2 != 2));

    for (string s: data) {

        if (s == date) continue;
        temp.push_back(s);
    }
    return temp;
}


