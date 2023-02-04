// Юзгин Николай Игоревич

// Задание 2. Написать функцию, которая получает указатель на
//   динамический массив и его размер.
//   Функция должна удалить из массива все числа, значения которых совпадают
//   со значеием числа, введенного пользователем, и вернуть
//   указатель на новый динамический массив.

#include<iostream>
#include"array_functions_helpers.h"
#include "array_functions_elements.h"

using namespace std;

int main() {
    system("chcp 65001");

    int size;
    int start;
    int end;
    int key;

    cout << "Введите размерность массива (количество элементов в выборке): " << endl;
    cin >> size;
    cout << "Введите значение левой границы диапазона массива: " << endl;
    cin >> start;
    cout << "Введите значение правой границы диапазона массива: " << endl ;
    cin >> end;
    cout << "Введите значение числа, которое необходимо удалить из массива: " << endl ;
    cin >> key;

    int* arr = new int [size];

    cout << "*** Исходный массив ***" << endl;
    RandomArray (arr, size, start, end);
    PrintArray(arr, size, '|');
    cout << endl;

    cout << "*** Новый массив ***" << endl;
    int size_2;
    int* arr_2 = DeleteElementsFromArray(arr, size, key, size_2);
    PrintArray(arr_2, size_2,'|');

    return 0;
}

