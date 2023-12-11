#include <iostream>

bool calculateSum(const double* arr, int arrSize, double& sum) {
    if (arrSize <= 0) {
        return false;
    }
    sum = 0.0;
    const double* ptr = arr;
    for (int i = 0; i < arrSize; ++i) {
        sum += *ptr;
        ptr++;
    }

    return true;
}

bool find(const int* arr, int size, int elem) {
    const int* ptr = arr;

    while (size > 0) {
        if (*ptr == elem) {
            return true;
        }
        ptr++;
        size--;
    }
    return false;
}

int main() {
    // CalculateSum
    const double arr1[] = { 1.5, 2.5, 3.5, 4.5, 5.5 };
    int arrSize1 = sizeof(arr1) / sizeof(arr1[0]);
    double sum1;

    if (calculateSum(arr1, arrSize1, sum1)) {
        std::cout << "Sum of elements in arr1: " << sum1 << std::endl;
    }
    else {
        std::cout << "Array is empty." << std::endl;
    }

    // Find
    const int arr2[] = { 10, 20, 30, 40, 50 };
    int arrSize2 = sizeof(arr2) / sizeof(arr2[0]);
    int elemToFind = 30;

    if (find(arr2, arrSize2, elemToFind)) {
        std::cout << "Element " << elemToFind << " found in arr2." << std::endl;
    }
    else {
        std::cout << "Element " << elemToFind << " not found in arr2." << std::endl;
    }

    return 0;
}
