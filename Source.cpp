#include <iostream>
#include <vector>

void splitArray(const std::vector<int>& original, std::vector<int>& part1, std::vector<int>& part2) {
    for (int i = 0; i < 5; ++i) {
        part1[i] = original[i];
        part2[i] = original[i + 5];
    }
}

int main() {
    std::vector<int> original = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    std::vector<int> part1(5);
    std::vector<int> part2(5);

    splitArray(original, part1, part2);

    std::cout << "Part 1: ";
    for (int num : part1) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Part 2: ";
    for (int num : part2) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
