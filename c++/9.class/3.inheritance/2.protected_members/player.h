#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string_view>
#include "person.h"
using namespace person_h;
using std::ostream;
using std::string;
using std::operator<<;
using std::string_view;

namespace player_h
{
    class Player : public Person
    {
        friend ostream &operator<<(ostream &cout, Player &pla);

    private:
        string main_game{"default"};

    public:
        Player();
        Player(string_view main_game_param);
        Player(string_view main_game_param, string_view first_name_param, string_view last_name_param); // modify name using protected keyword
        ~Player();
    };

}

#endif // PERSON_H