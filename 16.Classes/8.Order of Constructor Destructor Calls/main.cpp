#include <iostream>
#include <string_view>
class Dog
{
public:
    Dog() = default;
    Dog(std::string name_param, std::string breed_param, int age_param);
    ~Dog();

private:
    std::string name;
    std::string breed;
    int *p_age{nullptr};
};
Dog::Dog(std::string name_param, std::string breed_param, int age_param)
{
    name = name_param;
    breed = breed_param;
    p_age = new int;
    *p_age = age_param;
    std::cout << "Dog constructor called for " << name << std::endl;
}
Dog::~Dog()
{
    delete p_age;
    std::cout << "Dog destructor called for " << name << std::endl;
}

int main()
{
    Dog dog1("Tom1", "Shepard", 4);
    Dog dog2("Tom2", "Shepard", 5);
    Dog dog3("Tom3", "Shepard", 6);
    Dog dog4("Tom4", "Shepard", 7);
    std::cout << "Done " << std::endl;

    return 0;
}