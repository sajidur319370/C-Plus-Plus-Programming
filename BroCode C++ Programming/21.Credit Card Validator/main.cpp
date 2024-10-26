#include <iostream>
int getDigit(const int number);
int sumEvenDigits(const std::string cardNumber);
int sumOddDigits(const std::string cardNumber);
int main()
{
    std::cout << "******CREDIT CARD VALIDATOR*******" << std::endl;
    std::cout << "******Valid*******" << std::endl;
    std::cout << "******6011000990139424*******" << std::endl;
    std::cout << "*********************" << std::endl;
    std::cout << "******Invalid*******" << std::endl;
    std::cout << "******6011000990139425*******" << std::endl;
    std::cout << "*********************" << std::endl;

    std::string cardNumber;
    int result = 0;
    std::cout << "Enter Card Number: " << std::endl;
    // std::getline(std::cin >> std::ws, cardNumber);
    std::cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);
    if (result % 10 == 0)
    {
        std::cout << "Card Number is Valid " << std::endl;
    }
    else
    {
        std::cout << "Card Number is Invalid " << std::endl;
    }

    return 0;
}
int getDigit(const int number)
{
    return (number % 10) + ((number / 10) % 10);
}
int sumEvenDigits(const std::string cardNumber)
{
    int sum = 0;
    for (int i = cardNumber.size() - 2; i >= 0; i -= 2)
    {
        sum += getDigit((cardNumber[i] - '0') * 2);
    }
    return sum;
}
int sumOddDigits(const std::string cardNumber)
{
    int sum = 0;
    for (int i = cardNumber.size() - 1; i >= 0; i -= 2)
    {
        sum += (cardNumber[i] - '0');
    }
    return sum;
}