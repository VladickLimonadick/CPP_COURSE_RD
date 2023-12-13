#include <iostream>

const int ROWS = 3;
const int COLUMNS = 4;

void traverseArray(int arr[ROWS][COLUMNS]) {
    for (int col = COLUMNS - 1; col >= 0; --col) {
        for (int row = 0; row < ROWS; ++row) {
            std::cout << arr[row][col] << " ";
        }
    }
}

int main() {
    int arr[ROWS][COLUMNS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    traverseArray(arr);

    return 0;
}