#include <iostream>
void showBalance(double balance);
double depositMoney();
double withdrawMoney(double balance);
int main()
{

    std::cout << "************************************" << std::endl;
    std::cout << "BANK ACCOUNT" << std::endl;
    std::cout << "************************************" << std::endl;

    int choice = 0;
    double balance = 0;

    do
    {
        std::cout << "1.Show Balance." << std::endl;
        std::cout << "2.Deposite Money." << std::endl;
        std::cout << "3.Withdraw Money." << std::endl;
        std::cout << "4.Exit." << std::endl;
        std::cout << "************************************" << std::endl;
        std::cout << "Enter your choice:" << std::endl;
        std::cout << "************************************" << std::endl;
        std::cin >> choice;
        std::cin.clear();
        fflush(stdin);
        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance += depositMoney();
            showBalance(balance);
            break;
        case 3:
            balance -= withdrawMoney(balance);
            showBalance(balance);
            break;
        case 4:
            std::cout << "Tnanks for visiting us." << std::endl;
            break;
        default:
            std::cout << "Invalid Choice Please enter correct choice." << std::endl;
            break;
        }

        /* code */
    } while (choice != 4);

    return 0;
}

void showBalance(double balance)
{
    std::cout << "Your Balance amount: " << balance << " BDT" << std::endl;
}
double depositMoney()
{
    int amount = 0;
    std::cout << "Enter your amount to deposit: " << std::endl;
    std::cin >> amount;
    if (amount < 0)
    {
        std::cout << "Invalid amount!!Try another amount" << std::endl;
        return 0;
    }
    else
    {

        return amount;
    }
}
double withdrawMoney(double balance)
{
    int amount = 0;
    std::cout << "Enter your amount to withdraw: " << std::endl;
    std::cin >> amount;
    if (amount < 0)
    {
        std::cout << "Invalid amount!!Try another amount" << std::endl;
        return 0;
    }
    else if (amount > balance)
    {

        std::cout << "Insufficient Balance!!Try another amount" << std::endl;
        return 0;
    }
    else
    {
        return amount;
    }
}