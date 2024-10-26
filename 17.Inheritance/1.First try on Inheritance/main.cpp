#include <iostream>
#include "player.h"
int main()
{
    // Player p1;
    Player p1("Cricket");
    p1.set_first_name("William");
    p1.set_last_name("Son");

    std::cout << p1 << std::endl;

    return 0;
}