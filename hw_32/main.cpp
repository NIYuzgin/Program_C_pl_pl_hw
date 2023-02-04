// Юзгин Николай Игоревич

// Задание 3. Написать функцию, которая получает указатель
// на статический массив и его размер. Функция распределяет
// положительные, отрицательные и нулевые элементы в
// отдельные динамические массивы.

#include<iostream>
#include"array_functions_helpers.h"
#include "array_functions_split.h"

using namespace std;

int main() {
    system("chcp 65001");

    int size;
    int start;
    int end;


    cout << "Введите размерность массива (количество элементов в выборке): " << endl;
    cin >> size;
    cout << "Введите значение левой границы диапазона массива: " << endl;
    cin >> start;
    cout << "Введите значение правой границы диапазона массива: " << endl ;
    cin >> end;


    int* arr = new int [size];

    cout << "*** Исходный массив ***" << endl;
    RandomArray (arr, size, start, end);
    PrintArray(arr, size, '|');
    cout << endl;

    int positive_size;
    int* positives = CopyPositiveNumbers(arr, size, positive_size);
    cout << "*** Массив положительных элементов ***" << endl;

    PrintArray(positives, positive_size,'|');

    int negative_size;
    int* negatives = CopyNegativeNumbers(arr, size, negative_size);
    cout << "*** Массив отрицательных элементов ***" << endl;
    PrintArray(negatives, negative_size,'|');

    int zeros_size;
    int* zeros = CopyZeros(arr, size, zeros_size);
    cout << "*** Массив нулевых элементов ***" << endl;
    PrintArray(zeros, zeros_size,'|');

    return 0;
}
