#include "Player.h"
#include "Weapon.h"

// Constructors
Player::Player() : name(""), health(100), playerClass(Assault), weapon(nullptr) {}

Player::Player(std::string playerName, int playerHealth, PlayerClass pClass)
    : name(playerName), health(playerHealth), playerClass(pClass), weapon(nullptr) {}

// Destructor
Player::~Player() {
    delete weapon; // Release the memory for the weapon
}

// Methods
void Player::setWeapon(Weapon* newWeapon) {
    delete weapon; // Release any existing weapon
    weapon = newWeapon;
}

Weapon* Player::getWeapon() const {
    return weapon;
}

int Player::getHealth() const {
    return health;
}
