#include <iostream>

void combineArrays(int arr1[], int arr2[], int result[], int size) {
    int index = 0;

    for (int i = 0; i < size; ++i) {
        if (arr1[i] > 0) result[index++] = arr1[i];
        if (arr2[i] > 0) result[index++] = arr2[i];
    }

    for (int i = 0; i < size; ++i) {
        if (arr1[i] == 0) result[index++] = arr1[i];
        if (arr2[i] == 0) result[index++] = arr2[i];
    }

    for (int i = 0; i < size; ++i) {
        if (arr1[i] < 0) result[index++] = arr1[i];
        if (arr2[i] < 0) result[index++] = arr2[i];
    }
}

int main() {
    const int size = 5;
    int arr1[size] = { 1, -1, 0, 3, -4 };
    int arr2[size] = { 0, -2, 2, -3, 4 };
    const int resultSize = size * 2;
    int result[resultSize];

    combineArrays(arr1, arr2, result, size);

    std::cout << "Combined Array: ";
    for (int i = 0; i < resultSize; ++i) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
