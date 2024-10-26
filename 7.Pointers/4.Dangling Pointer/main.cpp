#include <iostream>
int main()
{
    int *number1{nullptr};
    int *number2{new int(45)};

    if (number1 != nullptr)
    {
        std::cout << "Number1: " << *number1 << std::endl;
    }
    else
    {
        std::cout << "Invalid address" << std::endl;
    }

    std::cout << "Program is ending Well!" << std::endl;
    std::cout << "Number2: " << *number2 << std::endl;

    int *number3{new int(84)};
    int *number4{number3};

    std::cout << "Number3: " << *number3 << std::endl;
    if (!(number3 == nullptr))
    {
        std::cout << "Number4: " << *number4 << std::endl;
    }
    else
    {
        std::cout << "Invalid address" << std::endl;
    }

    delete number3;
    number3 = nullptr;
    if (!(number3 == nullptr))
    {
        std::cout << "Number4: " << *number4 << std::endl;
    }
    else
    {
        std::cout << "Invalid address" << std::endl;
    }

    return 0;
}