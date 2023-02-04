#pragma once

int CalcPositiveNumbers(int* arr, int size) {
    int positive = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] > 0) {
            positive++;
        }
    }
    return positive;
}

int CalcNegativeNumbers(int* arr, int size) {
    int negative = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] < 0) {
            negative++;
        }
    }
    return negative;
}

int CalcZeros(int* arr, int size) {
    int zero = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == 0) {
            zero++;
        }
    }
    return zero;
}

int* CopyPositiveNumbers(int* arr, int size, int& new_size) {
    new_size = CalcPositiveNumbers(arr, size);
    int* positives = new int[new_size];

    for (int i = 0, j = 0; i < size; ++i) {
        if (arr[i] > 0) {
            positives[j] = arr[i];
            j++;
        }
    }
    return positives;
}

int* CopyNegativeNumbers(int* arr, int size, int& new_size) {
    new_size = CalcNegativeNumbers(arr, size);
    int* negatives = new int[new_size];

    for (int i = 0, j = 0; i < size; ++i) {
        if (arr[i] < 0) {
            negatives[j] = arr[i];
            j++;
        }
    }
    return negatives;
}

int* CopyZeros(int* arr, int size, int& new_size) {
    new_size = CalcZeros(arr, size);
    int* zeros = new int[new_size];

    for (int i = 0, j = 0; i < size; ++i) {
        if (arr[i] == 0) {
            zeros[j] = arr[i];
            j++;
        }
    }
    return zeros;
}


