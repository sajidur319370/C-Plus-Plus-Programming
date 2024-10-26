#ifndef PLAYER_H
#define PLAYER_H
#include "person.h"

class Player : public Person
{
    friend std::ostream &operator<<(std::ostream &out, const Player &player);

public:
    Player();
    ~Player();
    void play()
    {
        m_full_name = "Sajidur Rahman"; // Ok: Public member of parent class
        m_age = 22;                     // Ok: Protected member of parent class
        // m_address = "JASHORE"; //Compiler error: because of Private member of parent class
    };

private:
    int m_career_start_year{0};
    double m_salary{0.0};
    int health_factor{0};
};
#endif