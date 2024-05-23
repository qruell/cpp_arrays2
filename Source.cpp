#include <iostream>
#include <vector>

std::vector<int> sumArrays(const std::vector<int>& arr1, const std::vector<int>& arr2) {
    int size = arr1.size();
    std::vector<int> result(size);

    for (int i = 0; i < size; ++i) {
        result[i] = arr1[i] + arr2[i];
    }

    return result;
}

int main() {
    std::vector<int> arr1 = { 1, 2, 3, 4, 5 };
    std::vector<int> arr2 = { 6, 7, 8, 9, 10 };
    std::vector<int> result = sumArrays(arr1, arr2);

    std::cout << "Result: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
