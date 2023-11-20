#include <iostream> // Підключення бібліотеки введення/виведення



int main() { // Функція входу/виходу программи

  

  std::cout << "\"I love C++!\";" << std::endl; // Виведення тексту "I love C++!" в подвійних лапках разом із символом ";"

   

  int height = 6; // Фіксована висота трикутників



  // Трикутник, вирівняний ліворуч

  for (int row = 1; row <= height; row++) { // Цикл додавання рядків

    for (int star = 1; star <= row; star++) { // Цикл додавання зірок

      std::cout << "* ";

    }

    std::cout << std::endl;

  }



  std::cout << std::endl; // Роздільник між трикутниками



  std::cout << "I love C++!\n\n"; // Текст



  // Трикутник, вирівняний праворуч

  for (int row = 1; row <= height; row++) {

    for (int space = 1; space <= height - row; space++) {

      std::cout << " "; // Друк пробілів для вирівнювання

    }

    for (int star = 1; star <= row; star++) {

      std::cout << "* ";

    }

    std::cout << std::endl;

  }



  return 0; // Повернення 0, що означає успішне завершення програми

}

