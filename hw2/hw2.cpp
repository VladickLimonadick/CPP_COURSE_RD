#include <iostream>

#include <iomanip> // Для використання setprecision, boolalph 





enum class WeekDay {

  Monday = 1,

  Tuesday,

  Wednesday,

  Thursday,

  Friday,

  Saturday,

  Sunday

};





int main() {

 std::cout << "Task 1" << std::endl << std::endl;

   

    // Зчитуємо два числа з клавіатури

  int integer1, integer2;



  std::cout << "Enter the first integer and press Enter: ";

  std::cin >> integer1;



  std::cout << "Enter the second integer and press Enter : ";

  std::cin >> integer2;



    // Помінюємо значення змінних місцями

  int temp = integer1;

  integer1 = integer2;

  integer2 = temp;



    // Надрукуємо нові значення

  std::cout << std::endl << "Exchange the values of variables " << std::endl << std::endl;

  std::cout << "First number: " << integer1 << std::endl;

  std::cout << "Second number: " << integer2 << std::endl;

  std::cout << std::endl;







std::cout << "Task 2 " << std::endl << std::endl;

   

    // Створюємо та ініціалізуємо змінну типу double

  double myDouble01 = 4.12032568;



    // Виводимо значення змінної в консоль

  std::cout << "Double value: " << myDouble01 << std::endl;



    // Виводимо число в рядок шириною 20 символів, вирівняне по правому краю,

    // пусте місце заповнюємо символом ‘$’

  std::cout.width(20);

  std::cout.fill('$');

  std::cout << std::right << std::fixed << std::setprecision(6) << myDouble01 << std::endl;



    // Виводимо значення змінної, приведене до типу int (без символів після коми)

  int myInt = static_cast<int>(myDouble01);

  std::cout << "Integer value: " << myInt << std::endl << std::endl;







std::cout << "Task 3 " << std::endl << std::endl;



double myDouble02 = 300.412345;



    // Вивід з різною точністю (2, 5, 10 знаків після коми)

  std::cout << "2 digits after the decimal point: " << std::fixed << std::setprecision(2) << myDouble02 << std::endl;

  std::cout << "5 digits after the decimal point: " << std::fixed << std::setprecision(5) << myDouble02 << std::endl;

  std::cout << "10 digits after the decimal point: " << std::fixed << std::setprecision(10) << myDouble02 << std::endl;



    // Вивід в різних нотаціях

  std::cout << "Standard notation: " << myDouble02 << std::endl;

  std::cout << "e-notation: " << std::scientific << myDouble02 << std::endl << std::endl;





std::cout << "Task 4 " << std::endl << std::endl;



  // Виведення числового значення кожного дня тижня у консоль

  std::cout << "Monday: " << static_cast<int>(WeekDay::Monday) << std::endl;

  std::cout << "Tuesday: " << static_cast<int>(WeekDay::Tuesday) << std::endl;

  std::cout << "Wednesday: " << static_cast<int>(WeekDay::Wednesday) << std::endl;

  std::cout << "Thursday: " << static_cast<int>(WeekDay::Thursday) << std::endl;

  std::cout << "Friday: " << static_cast<int>(WeekDay::Friday) << std::endl;

  std::cout << "Saturday: " << static_cast<int>(WeekDay::Saturday) << std::endl;

  std::cout << "Sunday: " << static_cast<int>(WeekDay::Sunday) << std::endl << std::endl;





std::cout << "Task 5 " << std::endl << std::endl;







    // Зчитуємо число з консолі

  int inputNumber;

  std::cout << "Enter a number: ";

  std::cin >> inputNumber;



    // Приводимо число до типу bool

  bool boolValue = static_cast<bool>(inputNumber);



    // Виводимо значення bool у текстовому форматі

  std::cout << "Bool value: " << std::boolalpha << boolValue << std::endl;



  return 0;

}