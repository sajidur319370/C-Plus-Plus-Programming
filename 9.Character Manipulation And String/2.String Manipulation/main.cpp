#include <iostream>
#include <cstring>
int main()
{
    // Lhs will come after Rhs in lexicographical order
    /* const char message1[]{"Hello, my name is Sajidur Rahman"};
    const char *message2{"Hello, my name is Sajidur Rahman"};
    // strlen ignores null characters
    std::cout << "strlen(message1):" << std::strlen(message1) << std::endl;
    // sizeof include null characters
    std::cout << "sizeof(message1):" << sizeof(message1) << std::endl;
    // strlen ignores null characters
    std::cout << "strlen(message2):" << std::strlen(message2) << std::endl;
    // sizeof include null characters
    std::cout << "sizeof(message2):" << sizeof(message2) << std::endl;
    return 0; */

    /*  std::cout << "std::strcmp()" << std::endl;
    std::cout << "Lhs will come after Rhs in lexicographical order" << std::endl;

     const char *string_data1{"Alabama"};
     const char *string_data2{"Blabama"};
     const char string_data3[]{"Blabama"};
     const char string_data4[]{"Alabama"};

     std::cout << "std::strcmp(" << string_data1 << "," << string_data2 << "): " << std::strcmp(string_data1, string_data2) << std::endl;
     std::cout << "std::strcmp(" << string_data3 << "," << string_data4 << "): " << std::strcmp(string_data3, string_data4) << std::endl;

     string_data1 = "Alabama";
     string_data2 = "Alabamb";
     std::cout << "std::strcmp(" << string_data1 << "," << string_data2 << "): " << std::strcmp(string_data1, string_data2) << std::endl; */

    //  std::strchr to find all character one by one
    /* std::cout << "std::strchr() to find all character one by one " << std::endl;
    const char *const str{"I am Sajidur Rahman.So I am a programmer"};
    char target{'S'};
    const char *result = str;
    size_t iteration{};
    // std::cout << "Target:" << std::strchr(result, target) << std::endl;

    while ((result = std::strchr(result, target)) != nullptr)
    {
        std::cout << "Found '" << target << "' starting at: " << result << "\n";
        ++result;
        ++iteration;
        std::cout << "Result: " << result << std::endl;
        std::cout << "Iteration: " << iteration << std::endl;
    }
    std::cout << "Iteration: " << iteration << std::endl; */

    /* std::cout << "std::strchr() to find all character one by one " << std::endl;
    const char *str{"I am Sajidur Rahman.So I am a programmer"};
    char target{'S'};
    const char *result{nullptr};
    size_t iteration{};
    // std::cout << "Target:" << std::strchr(result, target) << std::endl;

    while ((result = std::strchr(str, target)) != nullptr)
    {
        std::cout << "********************************************************" << std::endl;
        std::cout << "Found '" << target << "' starting at: " << result << std::endl;
        std::cout << "Str: " << str << std::endl;
        std::cout << "Inside loop Iteration: " << iteration << std::endl;
        std::cout << "********************************************************" << std::endl;
        ++str;
        ++iteration;
    }
    std::cout << "Iteration: " << iteration << std::endl; */
    char input[] = "C:/Users/User/Desktop/C++/9.Character Manipulation And String";
    char *output = std::strrchr(input, '/');
    if (output)
    {
        std::cout << output + 1 << std::endl;
    }

    return 0;
}