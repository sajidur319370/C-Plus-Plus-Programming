#include <iostream>
#include <ctime>
char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void showWinner(char player, char computer);
int main()
{

    std::cout << "******************************" << std::endl;
    std::cout << "ROCK PAPER SCISSORS GAME" << std::endl;
    std::cout << "******************************" << std::endl;

    char player;
    char computer;

    player = getUserChoice();
    std::cout << "Your choice: ";
    showChoice(player);

    computer = getComputerChoice();
    std::cout << "Computer's choice: ";
    showChoice(computer);

    showWinner(player, computer);

    return 0;
}
char getUserChoice()
{
    char player;
    do
    {
        std::cout << "Enter your choice:" << std::endl;
        std::cout << "******************************" << std::endl;
        std::cout << "Press 'r' for Rock" << std::endl;
        std::cout << "Press 'p' for Paper" << std::endl;
        std::cout << "Press 's' for Scissors" << std::endl;
        std::cout << "******************************" << std::endl;
        std::cin >> player;

    } while (player != 'r' && player != 'p' && player != 's');

    return player;
}
char getComputerChoice()
{
    srand(time(0));
    int num = rand() % 3 + 1;
    switch (num)
    {
    case 1:
        return 'r';
        break;

    case 2:
        return 'p';
        break;

    case 3:
        return 's';
        break;
    }
    return 0;
}
void showChoice(char choice)
{
    switch (choice)
    {
    case 'r':
        std::cout << "Rock" << std::endl;
        break;
    case 'p':
        std::cout << "Paper" << std::endl;
        break;
    case 's':
        std::cout << "Scissors" << std::endl;
        break;
    }
}
void showWinner(char player, char computer)
{

    switch (player)
    {
    case 'r':
        switch (computer)
        {
        case 'r':
            std::cout << "It's tied" << std::endl;
            break;
        case 'p':
            std::cout << "You loose" << std::endl;
            break;
        case 's':
            std::cout << "You Win" << std::endl;
            break;
        };
        break;
    case 'p':
        switch (computer)
        {
        case 'r':
            std::cout << "You win" << std::endl;
            break;
        case 'p':
            std::cout << "it's tied" << std::endl;
            break;
        case 's':
            std::cout << "You loose" << std::endl;
            break;
        };
        break;
    case 's':
        switch (computer)
        {
        case 'r':
            std::cout << "You loose" << std::endl;
            break;
        case 'p':
            std::cout << "You Win" << std::endl;
            break;
        case 's':
            std::cout << "It's tied" << std::endl;
            break;
        };
        break;
    }
}