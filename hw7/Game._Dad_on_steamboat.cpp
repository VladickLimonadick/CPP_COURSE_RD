#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <string>
#include <cctype>
#include <cstdlib>
#include <limits>
#include <ctime>        // Random
#include <chrono>       // Delay N seconds
#include <thread>       // Delay N seconds
#include <Windows.h>    // Maximize Window

enum class Suspect {
    Suspect0,
    Suspect1, Suspect2, Suspect3, Suspect4, Suspect5, Suspect6, Suspect7, Suspect8, Suspect9, Suspect10, Suspect11, Suspect12
};

std::string getSuspectName(Suspect suspect) {
    switch (suspect) {
    case Suspect::Suspect0:  return "0";
    case Suspect::Suspect1:  return "Emma Taylor";
    case Suspect::Suspect2:  return "Jack Harrison";
    case Suspect::Suspect3:  return "Emily Johnson";
    case Suspect::Suspect4:  return "Jonathan Smith";
    case Suspect::Suspect5:  return "Margaret Green";
    case Suspect::Suspect6:  return "Arthur Brown";
    case Suspect::Suspect7:  return "Sofia Martinez";
    case Suspect::Suspect8:  return "Harold Johnson";
    case Suspect::Suspect9:  return "Liliana Fox";
    case Suspect::Suspect10:  return "Max Willis";
    case Suspect::Suspect11:  return "Olivia Miller";
    case Suspect::Suspect12:  return "Robert Stevenson";
    default: return "Unknown";
    }
}

std::vector<std::vector<std::string>> hintsForSuspects = {
    {"0"},

    //Suspect1 Emma Taylor
    {"Red hair was found on the victim's clothes",
    "Remnants of red lipstick were found on the victim's cheek",
    "The murderer was identified as a woman",
    "Legal documents were found at the murder site",
    "Shortly before the murder, the victim was seen with a red-haired woman",
    "The victim was wearing a watch with the inscription 'With love, your E.T.'",
    "It was found that the victim had several wives",
    "Man was stabbed in the heart with a knife",
    "Most likely, the murder was not planned",
    "The victim was a lawyer",
    "The victim was 180 cm tall",
    },

    //Suspect2 Jack Harrison
    {"А camera with a photos of the victim was found on the ship",
    "The murder was committed with a tourist knife",
    "A piece of black leather jacket was found at the murder scene",
    "Several compromising articles were written about the victim in newspapers",
    "The killer was identified as a man",
    "Most likely, the murder was well planned",
    "The victim was shot with a pistol",
    "Before the murder, witnesses heard the victim arguing with another man",
    "Traces of size 44 boots found at the murder scene",
    "The victim was holding a tape recorder with a confession of corruption",
    "The victim was a well-known politician",
    },

    //Suspect3 Emily Johnson
    {"Pink hair was found on the victim's clothes",
    "A ring was found in the victim's pocket",
    "Several fresh paintings on the ship depict the details of the murder",
    "A piece of plaid cloth was found in the victim's hand",
    "Traces of paint were found at the crime scene",
    "Most likely, the murder was not planned",
    "The victim is a woman of 45 years old",
    "The victim was traveling with her daughter and young lover",
    "It was found that the victim was drank",
    "The victim was strangled to death",
    "The victim often made scandals",
    },

    //Suspect4 Jonathan Smith
    {"It was established that the victim had great financial difficulties",
    "A coat button was found near the victim",
    "The documents with the signature of J.S. were found on the victim's person",
    "Shortly before the murder, the victim was seen with a man in a long coat",
    "The murder was most likely committed by a man",
    "Two glasses of whiskey found at the murder scene",
    "A man was killed by a blunt object to the head",
    "A case with counterfeit money was found at the murder scene",
    "Most likely, the murder was not planned",
    "Most likely, the killer was in a hurry",
    "A small mustache brush was found at the murder scene",
    },

    //Suspect5 Margaret Green
    {"Fragments of glasses were found at the crime scene",
    "It was found out that the murdered man's wife went missing 10 years ago",
    "The victim was poisoned with arsenic tea",
    "There was a smell of medicine at the crime scene",
    "Most likely, the murder was well planned",
    "Most likely, the murder was committed for revenge",
    "Most likely, the murder was committed by a woman",
    "Gray hair was found at the crime scene",
    "A piece of fabric with a floral print was found at the crime scene",
    "It was established that the victim was traveling on false documents",
    "Witnesses say the murdered man was a very unpleasant person",
    },

    //Suspect6 Arthur Brown
    {"The victim was killed using a special mechanism controlled from a distance",
    "The killer has a technical education",
    "The victim often stole other people's inventions",
    "Obviously, the murder was planned in advance",
    "Most likely, the killer was a man",
    "The victim had a ticket to an engineering conference",
    "Many threatening letters were found in the victim's possession",
    "The victim was 25 years old",
    "A smartphone with no call marks or messages was left at the murder scene",
    "The victim wrote a blog about the latest technologies and inventions",
    "The victim was 178 cm tall",
    },

    //Suspect7 Sofia Martinez
    {"Black hair was found on the victim's clothes",
    "It was established that the murdered person participated in musical events and concerts",
    "The remains of concert tickets were found at the murder scene",
    "Most likely, the killer was a woman",
    "Most likely, the murder was committed for revenge",
    "The victim was 22 years old",
    "The victim was traveling with her friend",
    "The victim's diary was found, where she wrote that she was in love with her best friend's boyfriend",
    "The victim was a student",
    "The victim was wearing a T-shirt and a short skirt",
    "The victim was a BTS fan ",
    },

    //Suspect8 Harold Johnson
    { "Pages from a notebook were found at the murder scene",
    "The victim was found with antidepressants",
    "A pendant with a symbol of harmony and peace was found at the murder scene",
    "It is known that the victim was treated several times in a psychiatric clinic",
    "The murdered man was 40 years old",
    "At the time of the murder, the victim's notebook indicated a meeting with  H.J.",
    "The victim was a fan of Sting's songs",
    "Most likely the killer is a man",
    "The victim was strangled with his tie",
    "The victim traveled a lot",
    "Glasses were found at the murder scene",
    },
    //Suspect9 Liliana Fox
    { "The victim was poisoned with cakes",
    "It is known that the victim was a well-known restaurateur",
    "A piece of orange cloth was found at the murder scene",
    "Most likely, the victim and the killer knew each other",
    "A recipe for a new dish was found, which the victim planned to present in his restaurant",
    "Most likely, the killer was a woman",
    "The victim is a 53-year-old man",
    "Most likely, the murder was committed for revenge",
    "The victim did not like to be disturbed during lunch",
    "The victim had a wife and 3 children",
    "The victim rarely traveled",
    },

    //Suspect10 Max Willis
    { "The victim was strangled with a string",
    "The victim was a music critic",
    "Most likely, the killer was a man",
    "It has been established that the victim participated in music openings and competitions",
    "It was established that the victim recorded music videos and performances for social networks",
    "Most likely, the murder was not planned",
    "The killer was in a big hurry",
    "It is established that the notebook with notes of his musical articles was missing from the victim",
    "The victim was a drug addict a few years ago",
    "The victim was a man of 41 years old",
    "The victim was known in music circles",
    },
    //Suspect11 Olivia Miller
    { "The victim was killed by a poisonous injection",
    "А syringe was found near the dead body",
    "It is known that the victim often had health problems",
    "White victim found a prescription signed by a doctor O.M.",
    "Most likely, the killer was a woman",
    "The victim was not identified",
    "Most likely, the murder was good planned",
    "The victim had several tattoos",
    "Most likely, the victim had a criminal past",
    "The victim was a man of 45 years old",
    "The murder occurred at 3 a.m.",
    },

    //Suspect12 Robert Stevenson
    { "The details of the murder are very similar to one of Agatha Christie's novels",
    "A piece of a page from a book was found at the scene of the murder",
    "Shortly before the murder, the victim was seen with a man with a beard",
    "A cigarette case with the initials R.S.",
    "Most likely, the killer was a man",
    "Gray hair was found at the crime scene",
    "There was a smell of medicine at the crime scene",
    "The victim was a frequent visitor to the library and antique bookstores",
    "It was established that the victim had a collection of ancient and rare books",
    "The victim was traveling with his wife",
    "The victim had a dog",
    },

};

void printHints(Suspect suspect, std::vector<int>& usedHints, const std::vector<std::vector<std::string>>& hintsForSuspects) {
    const std::vector<std::string>& hints = hintsForSuspects[static_cast<int>(suspect)];
    if (!hints.empty()) {
        int randomHintIndex;
        do {
            randomHintIndex = std::rand() % hints.size();
        } while (std::find(usedHints.begin(), usedHints.end(), randomHintIndex) != usedHints.end());

        usedHints.push_back(randomHintIndex);

        std::string hint = hints[randomHintIndex];
        for (char c : hint) {
            std::cout << c;
            std::this_thread::sleep_for(std::chrono::milliseconds(50));
        }

        std::cout << std::endl;
    }
}



/*_______________________GAME_______________________*/
int main() {

    // Maximize Window
    HWND consoleWindow = GetConsoleWindow();
    ShowWindow(consoleWindow, SW_MAXIMIZE);

    // The width of the game
    int maxConsoleWidth = 90;


            // Logotype
        std::string textLogo = "@LIZA AND LEMON INDIE GAMES 2023";
        int padding = (maxConsoleWidth - textLogo.length()) / 2;
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << std::setw(padding + textLogo.length()) << textLogo << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;

        // Delay N seconds
        std::this_thread::sleep_for(std::chrono::seconds(2));

        // Print img
        std::cout << ".                                                                                      ." << std::endl;
        std::cout << ".                                                                       @            @ ." << std::endl;
        std::cout << ".                                                   @        @                         ." << std::endl;
        std::cout << ".                                                               @    @                 ." << std::endl;
        std::cout << ".                                          @@ @  @ @    @      @                 @     ." << std::endl;
        std::cout << ".     ..........                        @@ @  @ @    @        ......                   ." << std::endl;
        std::cout << "......          ............           @@    @     @     .....      ....               ." << std::endl;
        std::cout << ".                           ..._.     _@   _@       .....               .....          ." << std::endl;
        std::cout << "..............................|4|.   |_|  |_|    ...                         ......    ." << std::endl;
        std::cout << ".                           __|__    | |  | |       .................................  ." << std::endl;
        std::cout << ".                   |    __|_o_o_|___|_|__|_|_ _                                       ." << std::endl;
        std::cout << ".                   |   //  o o    o o    o o  \\\\                                      ." << std::endl;
        std::cout << ".....            |__|__||_______[]_______[]__x__||___|              ........           ." << std::endl;
        std::cout << "..................\\__dead on steamboat______________/..................................." << std::endl;
        std::cout << ".~~__~~~__~~~__~~~_\\      |                        /~__~~~__~~~__~~~__~~~__~~~__~~~__~~." << std::endl;
        std::cout << "._~~~__~~~__~~~__~~~\\_~~~_|~~~__~~~__~~~__~~~__~~~/_~~~__~~~__~~~__~~~__~~~__~~~__~~~__." << std::endl;
        std::cout << ".\\~__~~~__~~~__~~~__~~~__~|~__~~~__~~~__~~~__~~~__~~~__~~~__~~~__~~~__~~~__~~~__~~~__~~." << std::endl;
        std::cout << ".##\\~__~~~__~~~__~~~__~~~\\|/~~~__~~~__~~~__~~~__~~~__~~~__~~~__~~~__~~~__~~~__~~~__~~~_." << std::endl;
        std::cout << ".####\\~~__~~~__~~~__~~~__~`~__~~~__~~~__~~~__~~~__~~~__~~~__~~~__~~~__~~~__~~~__~~~__~~." << std::endl;

        // Delay N seconds
        std::this_thread::sleep_for(std::chrono::seconds(3));

        // Start text
        std::string linesStart[] = {
            "________________________________________________________________________________________\n",
            "\n",
            "\n",
            "\n",
            "Hello, Detective.\n",
            "\n",
            "Thank you for arriving so fast!\n",
            "\n",
            "A terrible murder happened on this cruise ship at night.\n",
            "\n",
            "\n",
            "\n",
            "\n",
            "\n",
            "\n",
            "________________________________________________________________________________________\n",
        };

        // Print Start text
        for (const std::string& lines : linesStart) {
            int padding = (maxConsoleWidth - lines.length()) / 2;
            std::cout << std::setw(padding + lines.length()) << lines << std::endl;
        }

        // Delay N seconds
        std::this_thread::sleep_for(std::chrono::seconds(3));

        // Game information
        std::cout << " ON THE SHIP WAS 50 PERSONS, BUT WE HAVE JUST 12 PERSONS SUSPECT : " << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;

        // Delay N seconds
        std::this_thread::sleep_for(std::chrono::seconds(1));


        std::vector<std::string> characters = {
"|               |\n\
|     @@@@      |  1. Emma Taylor, 30 y.o.,\n\
|   @@@@@@@@    |     Lawyer, dressed strict suit, red lipstick, folder for papers,\n\
|  @@@@   _@@   |     short red hair.\n\
| @@@ o   o @@  |\n\
| @@|   ^  |@@  |\n\
| @@@\\ `- /@@@  |\n\
|  @@@\\__/@@@   |\n\
|   _|_|__      |\n\
|  /   \\  \\     |\n\
________________________________________________________________________________________\n",


"|               |\n\
|               |  2. Jack Harrison, 45 y.o.,\n\
|    xxxxxx     |     Journalist, dressed leather jacket, curly hair,\n\
|   x __  _\\    |     always with a camera, lover of adventure.\n\
| C|  o  o |    |\n\
| c|   ./  |    |\n\
|   |  --  |    |\n\
|    \\____/     |\n\
|   _|_|_       |\n\
|  /#####\\      |\n\
________________________________________________________________________________________\n",


"|               |\n\
|   ,,,,,,,     |  3. Emily Johnson, 28 y.o.,\n\
|  ,,,,,,,,,,   |     Artist, dressed  plaid skirt, big rings on fingers, pink hair.\n\
| ,,,,,^^^^,,   |\n\
| ,,, o   o ,,  |\n\
| ,,|   ^  |,,  |\n\
| ,,|  ._  |,,  |\n\
|,,,,\\____/,,,  |\n\
| ,,_|_|_,,,,   |\n\
|  /   \\ \\      |\n\
________________________________________________________________________________________\n",


"|               |\n\
|               |  4. Jonathan Smith, 50 y.o.,\n\
|   jjjjjjj     |     Financial consultant, dressed tuxedo, always with a coat,\n\
|  jj __  _\\    |     gray moustache, always\n\
| C|  v  |v|    |     focused on business.\n\
|  |`  ._| |    |\n\
|   |``````|    |\n\
|    \\````/     |\n\
|   __|_|_      |\n\
|  / \\ \\//\\     |\n\
________________________________________________________________________________________\n",


"|               |\n\
|    YYYYYY     |  5. Margaret Green, 60 y.o.,\n\
|  YYYYYYYYY    |     Pensioner, dressed dress with a floral print,\n\
| YYYYY ^^^YY   |     glasses on a chain, gray curls.\n\
| YYY--O--O-YY  |\n\
| YY|   ^  |YY  |\n\
| YY|  ._  |YY  |\n\
| YYY\\____/YYY  |\n\
| YYY|_|_YYYY   |\n\
|  /|  \\ \\      |\n\
________________________________________________________________________________________\n",


"|               |\n\
|               |  6. Arthur Brown, 35 y.o.,\n\
|  .--jjj       |     Engineer, dressed jeans, T - shirt with the image of a robot,\n\
| ///    \\      |     athletic build, short - cut hair, technical genius,\n\
|/// o  o_||    |     have all apple gadgets.\n\
| C|--u-u /     |\n\
| || ````/|     |\n\
|   \\_o /       |\n\
|   _||__       |\n\
|  /   \\ \\      |\n\
________________________________________________________________________________________\n",


"|    ..         |\n\
|    _=====     |  7. Sofia Martinez, 22 y.o.,\n\
|   ||::::::|   |     Student, dressed Jeans and T - shirt, always with headphones,\n\
|.||::::  _::|_ |     dark hair, passionate about music, always aware of trends.\n\
||.|::o   o :|.||\n\
||_|:   ^  /:|_||\n\
|  ::  .- /::   |\n\
|  ::\\___/::    |\n\
| :::|_|__: :   |\n\
| ;/   \\  \\     |\n\
________________________________________________________________________________________\n",


"|    _____      |\n\
|   /_____\\     |  8. Harold Johnson, 55 y.o.,\n\
| _|_______|__  |     Psychotherapist, dressed classic suit, always with a notebook,\n\
|  WW __  _W    |     strict appearance, big glasses.\n\
| CW---O--O-    |\n\
|  c|  ./  |    |\n\
|   |  --  |    |\n\
|    \\____/     |\n\
|   _|_|_       |\n\
|  /#####\\      |\n\
________________________________________________________________________________________\n",


"|  __________   |\n\
| /          \\  |  9. Liliana Fox, Age : 40 y.o.,\n\
||   %%%%%%%  | |     Restaurateur, dressed bright orange dress,\n\
||  %%%_  _%% | |     with goodies, curls in order, culinary expert,\n\
| \\%%% O  O %%/ |     always ready to treat.\n\
|  %%   ^  |%%  |\n\
|  %%  ._ |%%   |\n\
|  %%\\___/%%%   |\n\
|  %%|_|%%%%%   |\n\
|  /   \\  \\     |\n\
________________________________________________________________________________________\n",


"|    ______     |\n\
|  _/ _ _ _\\_   | 10. Max Willis, 25 y.o.,\n\
| /__________\\  |     Musician, dressed a dark jeans and jacket, long hair,\n\
|  ///     \\\    |     always with a guitar at hand.\n\
| /// o  |o \\   |\n\
| //    ~   \\   |\n\
|  /|  ._  |/   |\n\
|  / \\____/     |\n\
|   _|_|_       |\n\
|  /MUSIC\\      |\n\
________________________________________________________________________________________\n",


"|  __________   |\n\
| |/    GGG  \\  | 11. Olivia Miller, 35 y.o.,\n\
| /  GGGGGGG  | |     Dressed a doctor, white lab coat, medical case, tall. \n\
|| GGGG   _GG/  |\n\
| \\GGG o  o G   |\n\
| GGG    ^  |G  |\n\
| GGG  .-  /GG  |\n\
| GGG\\___ /GGG  |\n\
| GG |_| GGGG   |\n\
|  /   \\  \\     |\n\
________________________________________________________________________________________\n",


"|               |\n\
|    ______     | 12. Robert Stevenson, 60 y.o.,\n\
| __|______|__  |     Retired, dressed a dark pants, shirt, always with a book,\n\
| \\__________/  |     gray mustache and beard.\n\
|  |||  o  o|   |\n\
|  c||   _| |   |\n\
|   \\  == =/    |\n\
|    \\_,,,/     |\n\
|   __|_|_      |\n\
|  /888888\\     |\n\
________________________________________________________________________________________\n",
        };

        for (const std::string& character : characters) {
            std::cout << character << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(3));
        }



/*__________________GAME_LOGIC__________________*/

std::srand(static_cast<unsigned int>(std::time(nullptr)));

int attempts = 0;
int bestResult = INT_MAX;

while (true) {
    Suspect randomSuspect = static_cast<Suspect>(std::rand() % 12 + 1);
    std::string suspectName = getSuspectName(randomSuspect);

    int userInput = 0;
    std::vector<int> usedHints;
    std::cout << "HERE OUR TIP: " << std::endl;
    std::vector<int> emptyUsedHints;
    printHints(randomSuspect, emptyUsedHints, hintsForSuspects);
    std::cout << std::endl;
    std::cout << "WHAT DO YOU THINK, WHO IS THE KILLER?" << std::endl;

    while (true) {

        std::cout << std::endl;
        std::cout << "PLEASE ENTER A NUMBER BETWEEN 1 AND 12 TO PRESS CHARGES: ";
        std::cin >> userInput;

        if (std::cin.fail() || userInput < 1 || userInput > 12) {
            std::cin.clear();
            while (std::cin.get() != '\n') {
                continue; // Clear the input buffer
            }
            std::cout << "INCORRECT GUESS. TRY AGAIN." << std::endl;
            std::cout << std::endl;
        }
        else {
            if (static_cast<Suspect>(userInput) == randomSuspect) {
                attempts++;
                std::cout << std::endl;
                std::cout << "WELL DONE, DETECTIVE!" << std::endl;
                std::cout << "CONGRATULATIONS ON SOLVING THE CASE!" << std::endl;
                std::cout << std::endl;
                std::cout << std::endl;
                std::cout << "PASSENGER " << userInput << ", NAMED " << getSuspectName(randomSuspect) << ", IS ARRESTED." << std::endl;
                std::cout << std::endl;
                std::cout << std::endl;
                std::cout << ".....                                                                               ......" << std::endl;
                std::cout << "...              ####   #####   #####   #####  ####  ###### #####  #####              ...." << std::endl;
                std::cout << "..              #    #  #    #  #    #  #     #        ##   #      #    #               .." << std::endl;
                std::cout << ".               ######  #####   #####   ###    ####    ##   ###    #    #                ." << std::endl;
                std::cout << ".               #    #  #  #    #  #    #          #   ##   #      #    #                ." << std::endl;
                std::cout << ".               #    #  #   #   #   #   #####  ####    ##   #####  #####                 ." << std::endl;
                std::cout << ".                                                         ________                       ." << std::endl;
                std::cout << ".                       ________                         / ______ \\                      ." << std::endl;
                std::cout << ".                      / ______ \\                     __/ /      \\ \\                     ." << std::endl;
                std::cout << ".                     / /      \\ \\___                /  |/        \\_\\                   .." << std::endl;
                std::cout << "..                   / /        \\    \\        ,---._|  +|          | |                ...." << std::endl;
                std::cout << "....                |o|    .     | __ |_,---._-===--|   |          |o|      ..   ........." << std::endl;
                std::cout << "......  .      .    |_|   ...    | L| |--===--`---`  \\__ \\        / /   .................." << std::endl;
                std::cout << "...........   ...    \\ \\......../|___/..`---`...........\\ \\______/ /......................" << std::endl;
                std::cout << "......................\\ \\______/ /.......................\\________/......................." << std::endl;
                std::cout << ".......................\\________/........................................................." << std::endl;

                if (attempts < bestResult) {
                    bestResult = attempts;
                    std::cout << std::endl;
                    std::cout << std::endl;
                    std::cout << std::endl;
                    std::cout << "NEW BEST RESULT: " << bestResult << " ATTEMPTS!" << std::endl;
                    std::cout << std::endl;
                }

                break;
            }
            else {
                std::cout << std::endl;
                std::cout << "No, it has been established that this person has an alibi.\n"
                    << "here's our newest piece of evidence: " << std::endl;
                std::cout << std::endl;
                std::this_thread::sleep_for(std::chrono::milliseconds(20));

                printHints(randomSuspect, usedHints, hintsForSuspects);
                usedHints.clear();  // Clear the list of used hints before entering a new player
                usedHints.push_back(userInput);
                attempts++;
                std::cout << std::endl;
                std::cout << std::endl;
            }
        }
    }

    std::cout << std::endl;
    std::cout << "TIME TAKEN: " << attempts << " SECONDS" << std::endl;
    std::cout << std::endl;
    std::cout << "WOULD YOU LIKE TO PLAY AGAIN? (ENTER 0 FOR NO, 1 FOR YES): ";
    std::cin >> userInput;

    if (userInput == 0) {
        std::cout << std::endl;
        std::cout << "THANKS FOR PLAYING! GOODBYE!" << std::endl;
        break;
    }
    else {
        attempts = 0;
    }
}
    // Delay N seconds
    std::this_thread::sleep_for(std::chrono::seconds(1));
    return 0;
}