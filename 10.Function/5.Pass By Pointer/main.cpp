#include <iostream>
void say_age(int *age_param);
int main()
{
    int age{28};

    std::cout << "Outside the function Before incrementing age:" << age << std::endl;
    say_age(&age);
    std::cout << "Outside the function after incrementing age:" << age << std::endl;

    return 0;
}
void say_age(int *age_param)
{
    ++(*age_param);
    std::cout << "Inside the function after incrementing age: " << *age_param << std::endl;
}