#include <iostream>
int main()
{
    auto var1{12};
    auto var2{12.45L};
    auto var3{"s"};
    auto var4{34u};
    auto var5{345ll};
    auto var6{"s"};

    std::cout << "size of var 1: " << sizeof(var1) << std::endl;
    std::cout << "size of var 2: " << sizeof(var2) << std::endl;
    std::cout << "size of var 3: " << sizeof(var3) << std::endl;
    std::cout << "size of var 4: " << sizeof(var4) << std::endl;
    std::cout << "size of var 5: " << sizeof(var5) << std::endl;
    std::cout << "size of var 6: " << sizeof(var6) << std::endl;

    return 0;
}