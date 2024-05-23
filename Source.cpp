#include <iostream>

void sumArrays(int arr1[], int arr2[], int result[], int size) {
    for (int i = 0; i < size; ++i) {
        result[i] = arr1[i] + arr2[i];
    }
}

int main() {
    const int size = 5;
    int arr1[size] = { 1, 2, 3, 4, 5 };
    int arr2[size] = { 6, 7, 8, 9, 10 };
    int result[size];

    sumArrays(arr1, arr2, result, size);

    std::cout << "Result: ";
    for (int i = 0; i < size; ++i) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
