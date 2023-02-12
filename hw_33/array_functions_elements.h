#pragma once

#include<iostream>

using namespace std;

int CalcAmountGroupsElements(int index_start, int index_end) {
    int count_group = index_end - index_start;

    return count_group;
}

int* DeleteGroupsElementsFromArray(int* arr, int size, int index_start, int index_end, int& size_1) {
    size_1 = size - CalcAmountGroupsElements(index_start, index_end) - 1;
    int* temp = new int[size_1];

    for (int i = 0, j = 0; i < size; ++i) {
        if ((i >= index_start) & (i <= index_end)) continue;

        temp[j] = arr[i];
        j++;
    }
    return temp;
}

int* CopyGroupsElementsFromArray(int* arr, int size, int index_start, int index_end, int& size_2) {
    size_2 = CalcAmountGroupsElements(index_start, index_end) + 1;
    int* temp = new int[size_2];

    for (int i = 0, j = 0; i < size; ++i) {
        if ((i < index_start) || (i > index_end)) continue;

        temp[j] = arr[i];
        j++;
    }
    return temp;
}





