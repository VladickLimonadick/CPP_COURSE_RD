#include <iostream>
#include "Player.h"
#include "Weapon.h"

int main() {
    // Creating instances of the Player and Weapon classes
    Player player1("John", 100, Assault);
    Weapon* rifle = new Weapon("Assault Rifle", 30, 200);

    // Setting the weapon for the player
    player1.setWeapon(rifle);

    // Displaying player information
    std::cout << "Player: " << player1.getWeapon()->getName()
        << ", Health: " << player1.getHealth()
        << ", Weapon Damage: " << player1.getWeapon()->getDamage()
        << ", Weapon Range: " << player1.getWeapon()->getRange()
        << std::endl;

    // Clean up dynamically allocated memory
    delete rifle;

    return 0;
}
