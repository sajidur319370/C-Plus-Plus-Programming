#include <iostream>
int main()
{
    int val{30};
    val %= 11;
    std::cout << "Reminder: " << val << std::endl;
    return 0;
}