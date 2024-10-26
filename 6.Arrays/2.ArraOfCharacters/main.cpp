#include <iostream>
int main()
{
    char message[]{'H', 'e', 'l', 'l', 'o', '\0'};
    // Range based for loop

    std::cout << "Message: ";
    for (auto i : message)
    {
        std::cout << i;
    }
    std::cout << std::endl;
    std::cout << "Message: " << message << std::endl;

    char message2[6]{'H', 'e', 'l', 'l', 'o'};
    std::cout << std::endl;
    std::cout << "Message2: " << message2 << std::endl;

    char message3[]{'H', 'e', 'l', 'l', 'o'};
    std::cout << std::endl;
    std::cout << "Message3: " << message3 << std::endl;

    return 0;
}