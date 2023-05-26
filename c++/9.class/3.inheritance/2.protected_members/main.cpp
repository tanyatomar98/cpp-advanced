#include <iostream>
#include "person.h"
#include "player.h"
using namespace person_h;
using namespace player_h;
using std::cout;

int main()
{
    Player p1("badminton", "tanya", "tomar");
    cout << p1 << std::endl;
    
    return 0;
}