#include <iostream>
#include <fstream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <string>
#include <algorithm>

const int WORD_LENGTH = 5;

std::string getRandomWord(const std::vector<std::string>& words) {
    size_t index = rand() % words.size();
    return words[index];
}

std::string getWordOfTheDay(const std::vector<std::string>& words) {
    std::ifstream inFile("word_of_the_day.txt");
    std::string word;

    if (inFile >> word) {
        inFile.close();
        return word;
    }
    inFile.close();

    word = getRandomWord(words);

    std::ofstream outFile("word_of_the_day.txt");
    outFile << word;
    outFile.close();

    return word;
}

void displayWord(const std::string& word, const std::string& guessedWord) {
    for (size_t i = 0; i < word.length(); ++i) {
        if (guessedWord[i] == '*') {
            std::cout << "* ";
        }
        else {
            std::cout << guessedWord[i] << " ";
        }
    }
    std::cout << std::endl;
}

void updateGuessedWord(const std::string& word, const std::string& input, std::string& guessedWord) {
    for (size_t i = 0; i < word.length(); ++i) {
        if (toupper(input[i]) == toupper(word[i])) {
            guessedWord[i] = static_cast<char>(toupper(input[i]));
        }
        else if (word.find(tolower(input[i])) != std::string::npos) {
            guessedWord[i] = static_cast<char>(tolower(input[i]));
        }
        else {
            guessedWord[i] = '*';
        }
    }
}

bool isWordGuessed(const std::string& word, const std::string& guessedWord) {
    for (size_t i = 0; i < word.length(); ++i) {
        if (tolower(word[i]) != tolower(guessedWord[i])) {
            return false;
        }
    }
    return true;
}

int main() {
    std::ifstream inputFile("words.txt");

    if (!inputFile.is_open()) {
        std::cerr << "Failed to open the file words.txt" << std::endl;
        return 1;
    }

    std::vector<std::string> words;
    std::string word;

    while (inputFile >> word) {
        words.push_back(word);
    }

    inputFile.close();

    do {
        std::vector<std::string> playedWords;

        std::string wordOfTheDay = getWordOfTheDay(words);

        int mode;
        std::cout << "Choose a mode:\n1. Word of the Day\n2. Random Word\n";
        std::cin >> mode;

        if (mode != 1 && mode != 2) {
            std::cout << "Invalid mode. Exiting the game." << std::endl;
            return 1;
        }

        std::string chosenWord;
        if (mode == 1) {
            chosenWord = wordOfTheDay;

            if (std::find(playedWords.begin(), playedWords.end(), chosenWord) != playedWords.end()) {
                std::cout << "The Word of the Day has already been played. Try again tomorrow or choose another mode." << std::endl;
                return 0;
            }

            playedWords.push_back(chosenWord);
        }
        else {
            chosenWord = getRandomWord(words);
        }

        int attempts = 0;
        std::string guessedWord(WORD_LENGTH, '_');
        std::string input;

        std::cout << "Welcome to the Wordle game!" << std::endl;

        do {
            displayWord(chosenWord, guessedWord);

            std::cout << "Enter " << WORD_LENGTH << " letters: ";
            std::cin >> input;

            if (input.length() != WORD_LENGTH) {
                std::cout << "Please enter exactly " << WORD_LENGTH << " letters." << std::endl;
                continue;
            }

            updateGuessedWord(chosenWord, input, guessedWord);

            attempts++;

        } while (!isWordGuessed(chosenWord, guessedWord));

        std::cout << "Congratulations! You guessed the word '" << chosenWord << "' in " << attempts << " attempts." << std::endl;

        char playAgain;
        std::cout << "Do you want to play again? (y/n): ";
        std::cin >> playAgain;

        if (playAgain != 'y' && playAgain != 'Y') {
            break;
        }

    } while (true);

    std::cout << "Thanks for playing Wordle!" << std::endl;

    return 0;
}
