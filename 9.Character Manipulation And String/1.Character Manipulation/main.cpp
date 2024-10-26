#include <iostream>
int main()
{
    std::cout << std::endl;
    std::cout << "std::isalnum" << std::endl;

    std::cout << " 'C' is alphanumeric: " << isalnum('C') << std::endl;

    char input_char{'*'};
    if (isalnum(input_char))
    {
        std::cout << "* is alphanumeric";
    }
    else
    {
        std::cout << "* is not alphanumeric";
    }
    std::cout << "==========================================================" << std::endl;
    std::cout << "std::isblank" << std::endl;

    char message[]{"Hello , My name is Sajidur Rahman"};
    std::cout << message << std::endl;

    size_t blank_Count{};
    for (size_t i{0}; i <= sizeof(message); ++i)
    {
        if (isblank(message[i]))
        {
            std::cout << "Blank character is found at index:[" << i << "]" << std::endl;
            blank_Count++;
        }
    }
    std::cout << "We found total " << blank_Count << " in our message" << std::endl;

    size_t upperCount{};
    for (auto character : message)
    {

        if (isupper(character))
        {
            std::cout<<"'"<< character<<"'"<< "  is upper case" << std::endl;
            ++upperCount;
        }
    }
    std::cout << "We found total " << upperCount << " Upper case in our message" << std::endl;

    return 0;
}