#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    // ����� ��� ���������� ������� ��� �������� ��������� �����
    int GeneratingRange = 50;

    // �����, � ��� ���������� ��������� �����, ��� ������� �������
    int specialNumber = std::rand() % (GeneratingRange + 1);

    // ���� ��� ���������� ��������� ������������ �����, ������� ����� �� �������
    int userGuess;
    int attempts = 0;
    int highscore = INT_MAX;

    // ������� ���
    std::cout << "WELCOME TO SUPER GAME OF NUMBER's GUESSING CHALLENGE!\n";
    std::cout << "I'm (SUPER COMPUTER BRAIN) GENERATING, you (regular human) GUESS!\n";
    std::cout << "Enter -1 to give up!!!\n";

    do {
        // ��������� ������ ����������� ����� ��� ����������
        std::cout << "Generating random number (0-50)...\n";
        std::cout << "Make your guess: ";
        std::cin >> userGuess;

        // ��������, �� ������� �� ������ �������
        if (userGuess == -1) {
            std::cout << "ALREADY GIVING UP???";
            break;
        }

        attempts++; // ��������� ��������� �����

        // ��������, �� ���������� ������ �����
        if (userGuess == specialNumber) {
            std::cout << "!!! CONGRATS !!! " << userGuess << " WAS MY GUESS INDEED !!! You spent " << attempts << " tries!\n";

            // �������� �������
            if (attempts < highscore) {
                highscore = attempts;
                std::cout << "Your highscore is " << highscore << " tries!\n";
            }
            else {
                std::cout << "Try to beat your highscore next time!\n";
            }

            std::cout << "!!! BEWARE !!! NEXT TIME IT WON'T BE THAT EASY !!!\n";

            // ��������� ������ ����������� ����� ��� ���������� ������
            specialNumber = std::rand() % (GeneratingRange + 1);

            // �������� ��������� ����� ��� ���������� ������
            attempts = 0;
        }
        else {
            // ��������� ������� ��� �����������, ���� �� �� ������ �����
            if (userGuess > specialNumber + 20) {
                std::cout << "Too much! Try less\n";
            }
            else if (userGuess > specialNumber + 10) {
                std::cout << "Tooo way less. Try higher\n";
            }
            else if (specialNumber > userGuess + 20) {
                std::cout << "Almost there! Try just a little bit more\n";
            }
            else if (specialNumber > userGuess + 10) {
                std::cout << "Just a little bit above! Try less\n";
            }
            else {
                std::cout << "Your guess is out of range! Please guess a number between 0 and 50.\n";
            }
        }
    } while (userGuess != -1);

    return 0;
}
