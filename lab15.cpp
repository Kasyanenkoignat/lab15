#include <iostream>
#include <algorithm>

int main() {
    int a[20] = { 12, 43, 56, 78, 90, 21, 34, 55, 67, 89, 10, 32, 45, 67, 87, 54, 32, 12, 9, 8 };

    int b[20];
    for (int i = 0; i < 20; ++i) {
        b[i] = a[19 - i];
    }

    std::cout << "Array b (reverse of array a):\n";
    for (int i = 0; i < 20; ++i) {
        std::cout << b[i] << " ";
    }
    std::cout << std::endl;

    for (int i = 0; i < 19; ++i) {
        for (int j = 0; j < 19 - i; ++j) {
            if (b[j] > b[j + 1]) {
                std::swap(b[j], b[j + 1]);
            }
        }
    }

    std::cout << "\nSorted array b (in ascending order):\n";
    for (int i = 0; i < 20; ++i) {
        std::cout << b[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}