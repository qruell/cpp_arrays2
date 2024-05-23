#include <iostream>

void compressArray(int arr[], int size) {
    int index = 0;

    for (int i = 0; i < size; ++i) {
        if (arr[i] != 0) {
            arr[index++] = arr[i];
        }
    }

    while (index < size) {
        arr[index++] = -1;
    }
}

int main() {
    const int size = 8;
    int arr[size] = { 0, 1, 2, 0, 3, 4, 0, 5 };
    compressArray(arr, size);

    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
