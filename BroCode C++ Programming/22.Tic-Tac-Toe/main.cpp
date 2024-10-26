#include <iostream>
#include <ctime>
void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);
int main()
{

    std::cout << "******* TIC TAC TOE GAME ********" << std::endl;
    std::cout << "******* **************** ********" << std::endl;
    char spaces[9] = {' ',
                      ' ',
                      ' ',
                      ' ',
                      ' ',
                      ' ',
                      ' ',
                      ' ',
                      ' '};

    char player = 'x';
    char computer = 'o';
    bool running = true;

    drawBoard(spaces);
    while (running)
    {
        playerMove(spaces, player);
        drawBoard(spaces);
        if (checkWinner(spaces, player, computer))
        {
            running = false;
            break;
        }
        else if (checkTie(spaces))
        {
            running = false;
            break;
        }

        computerMove(spaces, computer);
        drawBoard(spaces);
        if (checkWinner(spaces, player, computer))
        {
            running = false;
            break;
        }
        else if (checkTie(spaces))
        {
            running = false;
            break;
        }
    }
    std::cout << "********** THANKS **********\n";
    return 0;
}
void drawBoard(char *spaces)
{
    std::cout << std::endl;
    std::cout << "-------------------" << std::endl;
    std::cout << "|     |     |     |" << std::endl;
    std::cout << "|  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  |" << std::endl;
    std::cout << "|_____|_____|_____|" << std::endl;
    std::cout << "|     |     |     |" << std::endl;
    std::cout << "|  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  |" << std::endl;
    std::cout << "|_____|_____|_____|" << std::endl;
    std::cout << "|     |     |     |" << std::endl;
    std::cout << "|  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  |" << std::endl;
    std::cout << "|     |     |     |" << std::endl;
    std::cout << "-------------------" << std::endl;
    std::cout << std::endl;
}
void playerMove(char *spaces, char player)
{
    int num;
    do
    {

        std::cout << "Enter a empty plot to place a marker(1-9): " << "\n";
        std::cin >> num;
        num--;
        if (spaces[num] == ' ')
        {
            spaces[num] = player;
            break;
        }
        else
        {
            std::cout << "The plot is not empty!!" << std::endl;
        }
    } while (!(num > 0) || !(num < 8) || spaces[num] != ' ');
}
void computerMove(char *spaces, char computer)
{
    int num;
    srand(time(0));
    while (true)
    {
        num = rand() % 9;
        if (spaces[num] == ' ')
        {
            spaces[num] = computer;
            break;
        }
    }
}
bool checkWinner(char *spaces, char player, char computer)
{
    if ((spaces[0] != ' ') && (spaces[0] == spaces[1]) && (spaces[1] == spaces[2]))
    {
        (spaces[0] == player) ? std::cout << "You Win" << std::endl
                              : std::cout << "Computer win" << std::endl;
    }
    else if ((spaces[3] != ' ') && (spaces[3] == spaces[4]) && (spaces[4] == spaces[5]))
    {
        (spaces[3] == player) ? std::cout << "You Win" << std::endl
                              : std::cout << "Computer win" << std::endl;
    }
    else if ((spaces[6] != ' ') && (spaces[6] == spaces[7]) && (spaces[7] == spaces[8]))
    {
        (spaces[6] == player) ? std::cout << "You Win" << std::endl
                              : std::cout << "Computer win" << std::endl;
    }
    else if ((spaces[0] != ' ') && (spaces[0] == spaces[3]) && (spaces[3] == spaces[6]))
    {
        (spaces[0] == player) ? std::cout << "You Win" << std::endl
                              : std::cout << "Computer win" << std::endl;
    }
    else if ((spaces[1] != ' ') && (spaces[1] == spaces[4]) && (spaces[4] == spaces[7]))
    {
        (spaces[1] == player) ? std::cout << "You Win" << std::endl
                              : std::cout << "Computer win" << std::endl;
    }
    else if ((spaces[2] != ' ') && (spaces[2] == spaces[5]) && (spaces[5] == spaces[8]))
    {
        (spaces[2] == player) ? std::cout << "You Win" << std::endl
                              : std::cout << "Computer win" << std::endl;
    }
    else if ((spaces[0] != ' ') && (spaces[0] == spaces[4]) && (spaces[4] == spaces[8]))
    {
        (spaces[0] == player) ? std::cout << "You Win" << std::endl
                              : std::cout << "Computer win" << std::endl;
    }
    else if ((spaces[2] != ' ') && (spaces[2] == spaces[4]) && (spaces[4] == spaces[6]))
    {
        (spaces[2] == player) ? std::cout << "You Win" << std::endl
                              : std::cout << "Computer win" << std::endl;
    }
    else
    {
        return false;
    }

    return true;
}
bool checkTie(char *spaces)
{
    for (size_t i = 0; i < 9; i++)
    {
        if (spaces[i] == ' ')
        {
            return false;
        }
    }
    std::cout << "IT's a Tie!!" << std::endl;

    return true;
}