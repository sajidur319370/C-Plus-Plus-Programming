#include <iostream>
int main()
{
    std::cout << "*************NUMBER GUESSING GAME**************" << std::endl;
    srand(time(0));
    int tries = 0;
    int guess;
    int num = (rand() % 100) + 1;

    do
    {
        std::cout << "What number it can be? Do you gess? Plesas Enter the number:" << std::endl;
        std::cin >> guess;
        tries++;
        if (guess > num)
        {
            std::cout << "You are to High" << std::endl;
        }
        else if (guess < num)
        {
            std::cout << "You are to Low" << std::endl;
        }
        else
        {
            std::cout << "You are Correct" << std::endl;
        }

    } while (guess != num);

    std::cout << "You tried: " << tries << " times" << std::endl;
    std::cout << "*****************************************************" << std::endl;

    return 0;
}