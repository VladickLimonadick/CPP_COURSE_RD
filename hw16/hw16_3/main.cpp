#include "Team.h"
#include "Player.h"
#include "Weapon.h"

int main() {
    Player* player1 = new Player("Player1", 100, Assault);
    Player* player2 = new Player("Player2", 90, Sniper);

    Team* teamA = new Team("TeamA");

    teamA->addPlayer(player1);
    teamA->addPlayer(player2);

    teamA->printTeamInfo();

    delete player1;
    delete player2;
    delete teamA;

    return 0;
}
