#include <iostream>
int main()
{

    for (size_t i = 0; i < 100; i++)
    {
        int *data = new (std::nothrow) int[10000000000000000];

        if (data != nullptr)
        {
            std::cout << "Data allocated safely" << std::endl;
        }
        else
        {
            std::cout << "Data  allocation Failed!!" << std::endl;
        }
    }

    std::cout << "Program ends well" << std::endl;

    return 0;
}