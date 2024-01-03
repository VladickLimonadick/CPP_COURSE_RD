#include <iostream>

enum class SortingDirection {
    ascending,
    descending
};

bool isSorted(const int* arr, int size, SortingDirection direction) {
    if (size <= 1) {
        return true;
    }

    for (int i = 1; i < size; ++i) {
        if ((direction == SortingDirection::ascending && arr[i] < arr[i - 1]) ||
            (direction == SortingDirection::descending && arr[i] > arr[i - 1])) {
            return false;
        }
    }
    return true;
}

int main() {
    const int size = 5;
    int ascendingArray[size] = { 1, 2, 3, 4, 5 };
    int descendingArray[size] = { 5, 4, 3, 2, 1 };

    if (isSorted(ascendingArray, size, SortingDirection::ascending)) {
        std::cout << "Ascending array is sorted.\n";
    }
    else {
        std::cout << "Ascending array is not sorted.\n";
    }

    if (isSorted(descendingArray, size, SortingDirection::descending)) {
        std::cout << "Descending array is sorted.\n";
    }
    else {
        std::cout << "Descending array is not sorted.\n";
    }

    return 0;
}
