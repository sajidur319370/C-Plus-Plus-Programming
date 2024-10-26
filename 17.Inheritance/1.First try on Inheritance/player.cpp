#include "person.h"
#include "player.h"
Player::Player(std::string_view game_param)
    : m_game(game_param) {

      };
std::ostream &operator<<(std::ostream &out, const Player &player)
{
    out << "Player: [Name:" << player.get_first_name() << " "
        << player.get_last_name() << ", Game: " << player.m_game << "]" << std::endl;
    return out;
};
Player::~Player() {

};