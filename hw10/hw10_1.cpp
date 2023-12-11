#include <iostream>

// The function of exchanging values using references
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// The function of exchanging values using pointers
void swap( int* a,  int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    std::cout << "Enter the value of x: ";
    std::cin >> x;

    std::cout << "Enter the value of y: ";
    std::cin >> y;

    // Calling the swap function using references
    swap(x, y);

    std::cout << "Swap using references: x = " << x << ", y = " << y << std::endl;

    // Return the initial values
    int x_copy = y;
    int y_copy = x;

    // Calling the swap function using pointers
    swap(&x_copy, &y_copy);

    std::cout << "Swap using pointers: x = " << x_copy << ", y = " << y_copy << std::endl;

    return 0;
}
