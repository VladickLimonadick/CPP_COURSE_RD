#include <iostream>
#include <algorithm>

constexpr unsigned int ROWS = 3;
constexpr unsigned int COLUMNS = 4;

enum class SortingDirection {
    ByRows,
    ByColumns
};

// Function to print the 2D array
void printArray(int arr[ROWS][COLUMNS]) {
    for (unsigned int i = 0; i < ROWS; ++i) {
        for (unsigned int j = 0; j < COLUMNS; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

// Function to sort 2D array by rows or columns
void sort(int arr[ROWS][COLUMNS], SortingDirection direction) {
    if (direction == SortingDirection::ByRows) {
        for (unsigned int row = 0; row < ROWS; ++row) {
            std::sort(arr[row], arr[row] + COLUMNS);
        }
    }
    else if (direction == SortingDirection::ByColumns) {
        for (unsigned int col = 0; col < COLUMNS; ++col) {
            int temp[ROWS];
            for (unsigned int row = 0; row < ROWS; ++row) {
                temp[row] = arr[row][col];
            }
            std::sort(temp, temp + ROWS);
            for (unsigned int row = 0; row < ROWS; ++row) {
                arr[row][col] = temp[row];
            }
        }
    }
}

int main() {
    int arr[ROWS][COLUMNS] = {
        {5, 2, 8, 6},
        {3, 1, 7, 9},
        {9, 5, 1, 12},
    };

    std::cout << "Original array:\n";
    printArray(arr);

    // Sort by rows
    sort(arr, SortingDirection::ByRows);
    std::cout << "Sorted by rows:\n";
    printArray(arr);

    // Sort by columns
    sort(arr, SortingDirection::ByColumns);
    std::cout << "Sorted by columns:\n";
    printArray(arr);

    return 0;
}
