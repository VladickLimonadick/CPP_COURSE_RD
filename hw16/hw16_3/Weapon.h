#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon {
private:
    std::string name;
    int damage;
    int range;

public:
    // Constructors
    Weapon();
    Weapon(std::string weaponName, int weaponDamage, int weaponRange);

    // Getter methods
    std::string getName() const;
    int getDamage() const;
    int getRange() const;

    // Destructor
    ~Weapon();
};

#endif
