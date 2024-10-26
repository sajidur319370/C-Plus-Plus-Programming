#include <iostream>
class Dog
{
public:
    Dog() = default;
    void print_info() {

    };

private:
    size_t leg_count;    // size 8
    size_t arm_count;    // size 8
    int *p_age;          // size 8
    std::string *p_name; // size 8
};

int main()
{

    Dog dog1;
    // Size depends on the collective size of the member variable not the member function
    std::cout << "size of :(Dog): " << sizeof(dog1) << std::endl;

    return 0;
}