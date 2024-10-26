#include <iostream>
int main()
{
    double temperature;
    int a;
    std::cout << "Which conversion do you want?" << "\n";
    std::cout << "1.Celsius to Farenhite? Press 1" << "\n";
    std::cout << "2.Farenhite to Celsius? Press 2" << "\n";
    std::cin >> a;

    if (a == 1)
    {
        std::cout << "What is your temperature in celsius?" << "\n";
        std::cin >> temperature;
        std::cout << "Your temperature is:" << "\n";
        std::cout << "1. " << temperature << " degree C" << "\n";
        temperature = 32 + (temperature * 1.8);
        std::cout << "2. " << temperature << " degree F" << "\n";
    }
    else if (a == 2)
    {
        std::cout << "What is your temperature in Farenhite?" << "\n";
        std::cin >> temperature;
        std::cout << "Your temperature is:" << "\n";
        std::cout << "1. " << temperature << " degree F" << "\n";
        temperature = (temperature - 32) / 1.8;
        std::cout << "2. " << temperature << " degree C" << "\n";
    }
    else
    {
        std::cout << "Please enter the correct input" << "\n";
    }

    return 0;
}