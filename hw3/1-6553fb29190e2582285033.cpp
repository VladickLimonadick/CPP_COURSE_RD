#include <iostream>

int main() {
    //Перше завдання. Перетворення секунд в формат hh:mm:ss за допомогою оператора %
    int EnterSeconds;

    std::cout << "Enter the number of seconds: ";
    std::cin >> EnterSeconds;

    int hours = (EnterSeconds / 3600);
    int minutes = (EnterSeconds % 3600) / 60;
    int seconds = EnterSeconds % 60;

    // Виводимо результат
    std::cout << "Your time in game:  "
        << hours << " hours : "
        << minutes << " minutes : "
        << seconds << " seconds. "
        << std::endl;

    return 0;
}
