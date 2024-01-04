#include "Player.h"
#include "Team.h"
#include "Weapon.h"

#include <iostream>

// Constructors
Player::Player() : name(""), health(100), playerClass(Assault), weapon(nullptr) {}

Player::Player(std::string playerName, int playerHealth, PlayerClass pClass)
    : name(playerName), health(playerHealth), playerClass(pClass), weapon(nullptr) {}

// Destructor
Player::~Player() {
    delete weapon; // Release the memory for the weapon
}

// Getter methods
std::string Player::getName() const {
    return name;
}

int Player::getHealth() const {
    return health;
}

PlayerClass Player::getPlayerClass() const {
    return playerClass;
}

Weapon* Player::getWeapon() const {
    return weapon;
}

// Setter methods
void Player::setTeam(Team* newTeam) {
}

// Other methods
void Player::printPlayerInfo() const {
    std::cout << "Name: " << name << ", Health: " << health
        << ", Player Class: " << playerClass
        << ", Weapon: " << (weapon ? weapon->getName() : "No Weapon") << std::endl;
}
