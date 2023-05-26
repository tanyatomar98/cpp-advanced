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

Player::~Player()
{
}

namespace player_h
{
    ostream& operator<<(ostream& cout, Player& pla)
    {
        cout << "Name: " << pla.full_name << std::endl <<
        "Age: " << pla.age << std::endl <<
        // "Address: " << pla.address << std::endl // error -> address is private
        "Address: " << pla.get_address() << std::endl ; // ok

        return cout;
    }
}