#include <iostream>

void splitArray(int original[], int part1[], int part2[], int size) {
    for (int i = 0; i < size / 2; ++i) {
        part1[i] = original[i];
        part2[i] = original[i + size / 2];
    }
}

int main() {
    const int size = 10;
    int original[size] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int part1[size / 2];
    int part2[size / 2];

    splitArray(original, part1, part2, size);

    std::cout << "Part 1: ";
    for (int i = 0; i < size / 2; ++i) {
        std::cout << part1[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Part 2: ";
    for (int i = 0; i < size / 2; ++i) {
        std::cout << part2[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
