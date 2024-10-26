#include <iostream>
enum name_roll
{
    sajid = 1,
    rakib = 2,
    imran = 3
};
int main()

{
    // enum =  string - integer paired constant
    name_roll student = imran;

    if (student == sajid)
    {
        std::cout << "Hello! " << "Sajid" << std::endl;
    }
    else if (student == 2)
    {
        std::cout << "Hello! " << "Rakib" << std::endl;
    }
    else if (student == 3)
    {
        std::cout << "Hello! " << "Imran" << std::endl;
    }

    return 0;
}