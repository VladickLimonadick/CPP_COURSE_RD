#include "Team.h"
#include "Player.h"
#include <iostream>

// Constructors
Team::Team(std::string name) : teamName(name) {}

// Getter methods
std::string Team::getTeamName() const {
    return teamName;
}

// Methods for adding/removing players
bool Team::addPlayer(Player* newPlayer) {
    if (newPlayer && players.size() < MAX_PLAYERS) {
        players.push_back(newPlayer);
        return true;
    }
    return false;
}

bool Team::removePlayer(Player* playerToRemove) {
    auto it = std::find(players.begin(), players.end(), playerToRemove);
    if (it != players.end()) {
        players.erase(it);
        return true;
    }
    return false;
}

// Other methods
void Team::printTeamInfo() const {
    std::cout << "Team Name: " << teamName << ", Players: " << players.size() << std::endl;
    for (const auto& player : players) {
        player->printPlayerInfo();
    }
}
