#pragma once

#include<iostream>

using namespace std;

int* AddElement(int* source, int* size, int element) {
    int* temp = new int[*size + 1];
    for (int i = 0; i < *size; ++i) {
        temp[i] = source[i];
    }
    temp[*size] = element;

    *size = *size + 1;
    return temp;
}

int* InsertElement(int* source, int* size, int index, int element) {
    int new_size = *size + 1;
    int* temp = new int[new_size];
    for (int i = 0; i < index; ++i) {
        temp[i] = source[i];
    }
    temp[index] = element;
    for (int i = index + 1, j=index; i < new_size; ++i, ++j) {
        temp[i] = source[j];
    }

    *size = new_size;
    return temp;
}

int* DeleteElement(int* source, int* size, int index) {
    int new_size = *size - 1;
    int* temp = new int[new_size];
    for (int i = 0, j = 0; i < *size; ++i) {
        if (i == index) continue;
        temp[j] = source[i];
        j++;
    }

    *size = new_size;
    return temp;
}


