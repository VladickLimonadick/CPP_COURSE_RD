#include <iostream>

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void printArray(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
}

int main() {
    const int size = 6;
    int arr[size] = { 64, 34, 25, 12, 22, 11 };

    std::cout << "Original array: ";
    printArray(arr, size);

    std::cout << std::endl;

    bubbleSort(arr, size);

    std::cout << "Sorted array: ";
    printArray(arr, size);

    return 0;
}
