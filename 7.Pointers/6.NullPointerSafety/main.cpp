#include <iostream>
int main()
{

    int *data{};
    data = new int(7);

    if (data)
    {
        std::cout << "Data located in a valid address:" << data << std::endl;
        std::cout << "Data: " << *data << std::endl;
    }
    else
    {
        std::cout << "Data  allocation Failed!!" << std::endl;
    }
    delete data;

    std::cout << "Program ends well" << std::endl;

    return 0;
}