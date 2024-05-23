#include <iostream>
#include <vector>

std::vector<int> combineArrays(const std::vector<int>& arr1, const std::vector<int>& arr2) {
    std::vector<int> result;

    for (int num : arr1) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    for (int num : arr2) {
        if (num > 0) {
            result.push_back(num);
        }
    }

    for (int num : arr1) {
        if (num == 0) {
            result.push_back(num);
        }
    }
    for (int num : arr2) {
        if (num == 0) {
            result.push_back(num);
        }
    }

    for (int num : arr1) {
        if (num < 0) {
            result.push_back(num);
        }
    }
    for (int num : arr2) {
        if (num < 0) {
            result.push_back(num);
        }
    }

    return result;
}

int main() {
    std::vector<int> arr1 = { 1, -2, 0, 3, -4 };
    std::vector<int> arr2 = { 0, -1, 2, -3, 4 };
    std::vector<int> combinedArray = combineArrays(arr1, arr2);

    for (int num : combinedArray) {
        std::cout << num << " ";
    }

    return 0;
}
