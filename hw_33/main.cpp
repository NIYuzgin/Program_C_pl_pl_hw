// Юзгин Николай Игоревич

// Написать функцию по удалению (копированию) из массива
// группы элементов. Значения индексов диапазона удаляемых
// (копируемых) элементов задаются пользователем.
// Удаляемые (копируемые) элементы должны располагаться
// рядом, без разрывов.

#include<iostream>
#include"array_functions_helpers.h"
#include "array_functions_elements.h"

using namespace std;

int main() {
    system("chcp 65001");

    int size;
    int start;
    int end;
    int index_start;
    int index_end;

    cout << "Введите размерность массива (количество элементов в выборке): " << endl;
    cin >> size;
    cout << "Введите значение левой границы диапазона массива: " << endl;
    cin >> start;
    cout << "Введите значение правой границы диапазона массива: " << endl ;
    cin >> end;
    cout << "Введите значение индекса левой границы диапазона удаляемых (копируемых) элементов массива: " << endl ;
    cin >> index_start;
    cout << "Введите значение индекса правой границы диапазона удаляемых (копируемых) элементов массива: " << endl ;
    cin >> index_end;

    int* arr = new int [size];

    cout << "*** Исходный массив ***" << endl;
    RandomArray (arr, size, start, end);
    PrintArray(arr, size, '|');
    cout << endl;

    int size_1 = size - CalcAmountGroupsElements(index_start, index_end) - 1;
    cout << "Размерность массива 1: " << size_1 << endl ;

    int size_2 = CalcAmountGroupsElements(index_start, index_end) + 1;
    cout << "Размерность массива 2: " << size_2 << endl ;

    cout << "*** Новый массив с удаленными элементами ***" << endl;
    int* arr_1 = DeleteGroupsElementsFromArray(arr, size, index_start, index_end, size_1);
    PrintArray(arr_1, size_1,'|');

    cout << "*** Новый массив с копированными элементами ***" << endl;
    int* arr_2 = CopyGroupsElementsFromArray(arr, size, index_start, index_end, size_2);
    PrintArray(arr_2, size_2,'|');

    return 0;
}
