#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Weapon; // Forward declaration

enum PlayerClass {
    Assault,
    Support,
    Sniper,
    Medic
};

class Player {
private:
    std::string name;
    int health;
    PlayerClass playerClass;
    Weapon* weapon; // Aggregation: Player has a Weapon

public:
    // Constructors
    Player();
    Player(std::string playerName, int playerHealth, PlayerClass pClass);

    // Destructor
    ~Player();

    // Getter methods
    std::string getName() const;
    int getHealth() const;
    PlayerClass getPlayerClass() const;
    Weapon* getWeapon() const;

    // Setter methods
    void setTeam(class Team* newTeam);

    // Other methods
    void printPlayerInfo() const;
};

#endif
