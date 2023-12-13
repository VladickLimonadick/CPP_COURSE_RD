#include <iostream>

const int ROWS = 3;
const int COLUMNS = 4;

void traverseArrayCustomOrder(int arr[ROWS][COLUMNS]) {
    for (int row = ROWS - 1; row >= 0; --row) {
        int startColumn = (row % 2 == 0) ? 0 : COLUMNS - 1;
        int endColumn = (row % 2 == 0) ? COLUMNS : -1;
        int step = (row % 2 == 0) ? 1 : -1;

        for (int col = startColumn; col != endColumn; col += step) {
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

    traverseArrayCustomOrder(arr);

    return 0;
}