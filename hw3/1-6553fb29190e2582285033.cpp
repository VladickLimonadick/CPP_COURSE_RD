#include <iostream>

int main() {
    //����� ��������. ������������ ������ � ������ hh:mm:ss �� ��������� ��������� %
    int EnterSeconds;

    std::cout << "Enter the number of seconds: ";
    std::cin >> EnterSeconds;

    int hours = (EnterSeconds / 3600);
    int minutes = (EnterSeconds % 3600) / 60;
    int seconds = EnterSeconds % 60;

    // �������� ���������
    std::cout << "Your time in game:  "
        << hours << " hours : "
        << minutes << " minutes : "
        << seconds << " seconds. "
        << std::endl;

    return 0;
}
