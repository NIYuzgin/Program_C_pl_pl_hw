// Юзгин Николай Игоревич
// Задание 1. Написать следующие функции для работы с
//   динамическим массивом:
//   * Функция добавления элемента в конец массива.
//   * Функция вставки элемента по указанному индексу.
//   * Функция удаления элемента по указанному индексу.

#include<iostream>
#include"array_functions_helpers.h"
#include "array_functions_elements.h"

using namespace std;

int main() {
    system("chcp 65001");

    int size;
    int start;
    int end;
    int element;
    int index_add;
    int index_delete;

    cout << "Введите размерность массива (количество элементов в выборке): " << endl;
    cin >> size;
    cout << "Введите зачение левой границы диапазона массива: " << endl;
    cin >> start;
    cout << "Введите зачение правой границы диапазона массива: " << endl ;
    cin >> end;
    cout << "Введите значение элемента, который необходимо добавить в массив: " << endl;
    cin >> element;
    cout << "Введите индекс, по которому необходимо добавить элемент в массив: " << endl;
    cin >> index_add;
    cout << "Введите индекс, по которому необходимо удалить элемент из массива: " << endl;
    cin >> index_delete;

    int* arr = new int [size];

    cout << "*** Исходный массив ***" << endl;
    RandomArray (arr, size, start, end);
    PrintArray(arr, size, '|');

    cout << "*** Добавление элемента в конец массива ***" << endl;
    arr = AddElement(arr, &size, element);
    PrintArray(arr, size, '|');

    cout << "*** Вставка элемента по указанному индексу ***" << endl;
    arr = InsertElement(arr, &size, index_add, element);
    PrintArray(arr, size, '|');

    cout << "*** Удаление элемента по указанному индексу ***" << endl;
    arr = DeleteElement(arr, &size, index_delete);
    PrintArray(arr, size, '|');

    return 0;
}