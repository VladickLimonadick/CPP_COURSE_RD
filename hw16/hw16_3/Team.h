#ifndef TEAM_H
#define TEAM_H

#include <vector>
#include <string>

class Player; // Forward declaration

const int MAX_PLAYERS = 10;

class Team {
private:
    std::string teamName;
    std::vector<Player*> players; // Aggregation: Team has Players

public:
    // Constructors
    Team(std::string name);

    // Getter methods
    std::string getTeamName() const;

    // Methods for adding/removing players
    bool addPlayer(Player* newPlayer);
    bool removePlayer(Player* playerToRemove);

    // Other methods
    void printTeamInfo() const;
};

#endif