
#pragma once

#include<iostream>
#include"time.h"

using namespace std;

void RandomArray(int arr[], int size, int start, int end) {
    srand(time(0));

    for (int i = 0; i < size; ++i) {
        arr[i] = start + rand() % (end - start + 1);
    }
}

void PrintArray(int arr[], int size, char symbol) {
    cout << symbol << " ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << symbol << endl;
}


