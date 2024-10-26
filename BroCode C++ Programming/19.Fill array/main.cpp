#include <iostream>
int main()
{
    // Fill array with Function:-> Fill()
    std::string food[10];
    std::string name[10];
    std::string temp;
    std::fill(food, food + (sizeof(food) / sizeof(food[0])), "Rice");

    std::cout << "*********************Foods*******************************" << "\n";
    for (auto &&i : food)
    {
        std::cout << "Food: " << i << std::endl;
    }
    std::cout << "****************************************************" << "\n";
    // Fill array with user input
    for (size_t i = 0; i < (sizeof(name) / sizeof(name[0])); i++)
    {
        std::cout << "Enter name:" << std::endl;
        std::getline(std::cin >> std::ws, temp);
        if (temp == "q")
        {
            break;
        }
        else
        {
            name[i] = temp;
        }
    }

    std::cout << "*********************Names*******************************" << "\n";
    for (size_t i = 0; !name[i].empty(); i++)
    {
        std::cout << "Name: " << name[i] << std::endl;
    }

    return 0;
}