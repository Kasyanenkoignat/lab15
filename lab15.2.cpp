#include <iostream>

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

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

    selectionSort(b, 20);

    std::cout << "\nSorted array b (in ascending order):\n";
    for (int i = 0; i < 20; ++i) {
        std::cout << b[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}