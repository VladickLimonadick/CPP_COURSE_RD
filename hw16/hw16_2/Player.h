#ifndef PLAYER_H
#define PLAYER_H

#include <string>

// Forward declaration
class Weapon;

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
    Weapon* weapon; // Composition: Player has a Weapon

public:
    // Constructors
    Player();
    Player(std::string playerName, int playerHealth, PlayerClass playerClass);

    // Destructor
    ~Player();

    // Methods
    void setWeapon(Weapon* newWeapon);
    Weapon* getWeapon() const;
    int getHealth() const;  // Added method to get player's health

    // Other methods as needed
};

#endif // PLAYER_H
