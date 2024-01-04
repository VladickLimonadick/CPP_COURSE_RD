#include "Weapon.h"

// Constructors
Weapon::Weapon() : name(""), damage(0), range(0) {}

Weapon::Weapon(std::string weaponName, int weaponDamage, int weaponRange)
    : name(weaponName), damage(weaponDamage), range(weaponRange) {}

// Getter methods
std::string Weapon::getName() const {
    return name;
}

int Weapon::getDamage() const {
    return damage;
}

int Weapon::getRange() const {
    return range;
}

// Destructor
Weapon::~Weapon() {
    // Add any additional cleanup code if needed
}
