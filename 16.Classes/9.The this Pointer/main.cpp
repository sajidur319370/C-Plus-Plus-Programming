#include <iostream>
#include <string_view>
class Dog
{
public:
    Dog() = default;
    Dog(std::string name_param, std::string breed_param, int age_param);
    ~Dog();

    // Setters through pointer
    /*  Dog *set_dog_name(std::string_view name)
     {
         // name = name;
         this->name = name;
         return this;
     }
     Dog *set_dog_breed(std::string_view breed)
     {
         this->breed = breed;
         return this;
     }
     Dog *set_dog_age(int age)
     {
         *(this->p_age) = age;
         return this;
     } */

    // Setters through Address
    Dog &set_dog_name(std::string_view name)
    {
        // name = name;
        this->name = name;
        return *this;
    }
    Dog &set_dog_breed(std::string_view breed)
    {
        this->breed = breed;
        return *this;
    }
    Dog &set_dog_age(int age)
    {
        *(this->p_age) = age;
        return *this;
    }

    void print_info()
    {
        std::cout << "Dog(" << this << "): [" << "name:" << name << "," << "breed:" << breed << "," << "age:" << *p_age << "]" << std::endl;
    }

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
    std::cout << "Dog constructor called for " << name << " at " << this << std::endl;
}
Dog::~Dog()
{
    delete p_age;
    std::cout << "Dog destructor called for " << name << " at " << this << std::endl;
}

int main()
{
    Dog dog1("Tom", "Shepard", 6);
    dog1.print_info();
    /* dog1.set_dog_name("Fluppy");
    dog1.set_dog_breed("Mumba");
    dog1.set_dog_age(8); */

    // Chained call using Pointer
    /* dog1.set_dog_name("Pumba")->set_dog_breed("fox")->set_dog_age(0);
    dog1.print_info(); */

    // Chained call using Address
    dog1.set_dog_name("Fluppy").set_dog_breed("Wire fox Terrior").set_dog_age(8);
    dog1.print_info();
    std::cout << "Done " << std::endl;

    return 0;
}