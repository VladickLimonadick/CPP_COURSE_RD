#include "Vector2d.h"

int main() {
    Vector2d testVec(1.2, 5.6);
    std::cout << "Vector: ";
    testVec.print();
    std::cout << "\nLength: " << testVec() << std::endl;

    Vector2d anotherVec;
    std::cout << "Default Vector: ";
    anotherVec.print();
    std::cout << "\nLength: " << anotherVec() << std::endl;

    std::cout << "\nEnter vector coordinates (x y): ";
    testVec.input();

    std::cout << "Updated Vector: ";
    testVec.print();
    std::cout << "\nLength: " << testVec() << std::endl;

    std::cout << "\nTesting operator[]:" << std::endl;
    try {
        std::cout << "x: " << testVec[0] << ", y: " << testVec[1] << std::endl;
    }
    catch (const std::out_of_range& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\nTotal active instances: " << Vector2d::getInstanceCount() << std::endl;

    return 0;
}
