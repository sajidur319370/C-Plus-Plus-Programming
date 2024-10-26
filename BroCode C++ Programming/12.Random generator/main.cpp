#include <iostream>
int main()
{
    srand(time(NULL));
    int num = (rand() % 6) + 1;

    // std::cout << "Random Number is: " << num << "\n";

    switch (num)
    {
    case 1:
        std::cout << "You Take a single." << '\n';
        break;
    case 2:
        std::cout << "You Take a double." << '\n';
        break;
    case 3:
        std::cout << "You Take a Triple." << '\n';
        break;
    case 4:
        std::cout << "Yopu shot a cover drive and  four." << '\n';
        break;
    case 5:
        std::cout << "Wide ball and Four by Boundary." << '\n';
        break;
    case 6:
        std::cout << "Absolutely Fine ! It is a Huge Six." << '\n';
        break;
    }

    return 0;
}