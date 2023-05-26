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
    // public specifier give access to all members of base class except private members
    class Player : public Person
    {
        friend ostream &operator<<(ostream &cout, Player &pla);

    private:
        string main_game{"default"};

    public:
        Player();
        ~Player();
    };

}

#endif // PERSON_H