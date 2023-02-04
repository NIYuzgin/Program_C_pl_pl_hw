#pragma once

#include<iostream>

using namespace std;

int CalcAmountElements(int* arr, int size, int key) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == key) {
            count++;
        }
    }
    return count;
}

int* DeleteElementsFromArray(int* arr, int size, int key, int& new_size) {
    int count = CalcAmountElements(arr, size, key);
    new_size = size - count;
    int* temp = new int[new_size];

    for (int i = 0, j = 0; i < size; ++i) {
        if (arr[i] == key) continue;

        temp[j] = arr[i];
        j++;
    }
    return temp;
}

