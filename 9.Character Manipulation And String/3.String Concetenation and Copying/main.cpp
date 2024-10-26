#include <iostream>
#include <cstring>
int main()
{
    // Concatenation
    /* std::cout << "std::strcat(dest,source)" << std::endl;
    char dest[50] = "Hello ";
    const char source[50] = "World";

    std::strcat(dest, source);
    std::strcat(dest, " Foken fuckerberg");
    std::cout << dest << std::endl;*/

    // More concatenation
    /* char *dest1 = new char[30]{'F', 'o', 'k', 'e', 'n', ' ', '\0'};
    char *source1 = new char[30]{'T', 'h', 'e', ' ', 'F', 'u', 'k', 'e', 'r', 'b', 'e', 'r', 'g', '\0'};

    std::cout << "std::strlen(dest1): " << std::strlen(dest1) << std::endl;
    std::cout << "std::strlen(source1): " << std::strlen(source1) << std::endl;

    std::cout << "Concatenating...." << std::endl;
    std::cout << "std::strcat(dest1,source1): " << std::strcat(dest1, source1) << std::endl;
    std::cout << "dest1: " << dest1 << std::endl; */
    /*
        char *dest2 = new char[30]{'F', 'o', 'k', 'e', 'n', ' ', '\0'};
        char *source2 = new char[30]{'T', 'h', 'e', ' ', 'F', 'u', 'k', 'e', 'r', 'b', 'e', 'r', 'g', '\0'};

        std::cout << "Concatenating...." << std::endl;
        std::cout << "std::strncat(dest2,source2): " << std::strncat(dest2, source2, 2) << std::endl;
        std::cout << "dest1: " << dest2 << std::endl; */

    /* std::cout << "std::strcpy" << std::endl;
    const char *source4 = "C++ is a multipurpose programming language";
    char *dest4 = new char[std::strlen(source4) + 1];
    std::strcpy(dest4, source4);

    std::cout << "length of dest4: " << std::strlen(dest4) << std::endl;
    std::cout << "Size of dest4: " << sizeof(dest4) << std::endl;
    std::cout << "dest4: " << dest4 << std::endl; */

    std::cout << "std::strncpy" << std::endl;
    const char *source5 = "programming language";
    char dest5[] = {'C', '+', '+', 'i', 's', 'a', '\0'};
    std::strncpy(dest5, source5, 3);

    std::cout << "length of dest5: " << std::strlen(dest5) << std::endl;
    std::cout << "Size of dest5: " << sizeof(dest5) << std::endl;
    std::cout << "Copying........" << std::endl;
    std::cout << "dest5: " << dest5 << std::endl;

    return 0;
}