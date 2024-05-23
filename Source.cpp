#include <iostream>
#include <vector>

void compressArray(std::vector<int>& arr) {
    int n = arr.size();
    int index = 0;

    for (int i = 0; i < n; ++i) {
        if (arr[i] != 0) {
            arr[index++] = arr[i];
        }
    }

    while (index < n) {
        arr[index++] = -1;
    }
}

int main() {
    std::vector<int> arr = { 0, 1, 2, 0, 3, 0, 4, 5 };
    compressArray(arr);

    for (int num : arr) {
        std::cout << num << " ";
    }

    return 0;
}
