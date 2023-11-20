#include <iostream>

enum class Season {
    Spring,
    Summer,
    Autumn,
    Winter
};

int main() {
    // «читуЇмо число в≥д користувача
    int monthNumber;
    std::cout << "Enter a number representing a month (1-12): ";
    std::cin >> monthNumber;

    // ¬изначаЇмо пору року за номером м≥с€ц€ використовуюч≥ switch
    Season currentSeason;

    switch (monthNumber) {
    case 1:
    case 2:
    case 3:
        currentSeason = Season::Spring;
        break;
    case 4:
    case 5:
    case 6:
        currentSeason = Season::Summer;
        break;
    case 7:
    case 8:
    case 9:
        currentSeason = Season::Autumn;
        break;
    case 10:
    case 11:
    case 12:
        currentSeason = Season::Winter;
        break;
    default:
        std::cout << "Are you from this planet?" << std::endl;
        return 1;
    }

    // ¬иводимо пору року
    switch (currentSeason) {
    case Season::Spring:
        std::cout << "Spring" << std::endl;
        break;
    case Season::Summer:
        std::cout << "Summer" << std::endl;
        break;
    case Season::Autumn:
        std::cout << "Autumn" << std::endl;
        break;
    case Season::Winter:
        std::cout << "Winter" << std::endl;
        break;
    }

    return 0;
}
