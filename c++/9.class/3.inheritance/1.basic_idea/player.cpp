#include <iostream>
#include <string_view>
#include "player.h"
using namespace player_h;
using std::string;
using std::operator<<;
using std::cout;
using std::ostream;
using std::string_view;

Player::Player()
{
}

Player::Player(string_view main_game_param)
    : main_game(main_game_param)
{
}

Player::Player(string_view main_game_param, string_view first_name_param, string_view last_name_param)
{
    this->main_game = main_game_param;
    this->set_first_name(first_name_param);
    this->set_last_name(last_name_param);
}

Player::~Player()
{
}

namespace player_h
{
    ostream& operator<<(ostream& cout, Player& pla)
    {
        cout << "Player['name': " << pla.get_first_name() << " " << pla.get_last_name() << ", 'game': " << pla.main_game << " ]";
        return cout;
    }
}