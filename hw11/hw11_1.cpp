#include <iostream>

const int ROWS = 3;
const int COLUMNS = 4;

bool find(int arr_2d[ROWS][COLUMNS], int toFind) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLUMNS; ++j) {
            if (arr_2d[i][j] == toFind) {
                return true;  // Знайдено значення
            }
        }
    }
    return false;  // Значення не знайдено
}

int main() {
    int arr[ROWS][COLUMNS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int toFind;

    std::cout << "Enter the value to find: ";
    std::cin >> toFind;

    if (find(arr, toFind)) {
        std::cout << "Value found in the array.\n";
    } else {
        std::cout << "Value not found in the array.\n";
    }

    return 0;
}
