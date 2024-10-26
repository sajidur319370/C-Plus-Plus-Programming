#include <iostream>
#include "animal.h"
#include "feline.h"
#include "dog.h"
void do_something_with_animal_ptr(Animal *animal)
{
    std::cout << "In function taking base pointer..." << std::endl;
    Feline *feline_ptr = dynamic_cast<Feline *>(animal);

    if (feline_ptr)
    {
        feline_ptr->do_some_feline_thingy();
    }
    else
    {
        std::cout << "Couldn't cast to Feline pointer,Sorry." << std::endl;
    }
}

void do_something_with_animal_ref(Animal &animal)
{
    std::cout << "In function taking base reference..." << std::endl;
    Feline *feline_ptr_1{dynamic_cast<Feline *>(&animal)};
    if (feline_ptr_1)
    {
        feline_ptr_1->do_some_feline_thingy();
    }
    else
    {
        std::cout << "Couldn't cast to Feline reference,Sorry." << std::endl;
    }
}

int main()
{

    // Base class pointer
    Animal *animal1 = new Feline("stripes", "feline1");

    // If the cast succeeds, we get a valid pointer back,
    // if it fails, we get nullptr. So we can check before
    // calling stuff on the returned pointer

    std::cout << "-----------" << std::endl;
    Feline *feline_ptr{dynamic_cast<Feline *>(animal1)};
    if (feline_ptr)
    {
        feline_ptr->do_some_feline_thingy();
    }
    else
    {
        std::cout << "Couldn't do the transformation from Animal* to Dog*" << std::endl;
    }
    std::cout << "-----------" << std::endl;

    Feline feline2("stripes", "feline2");
    Animal &animal_ref = feline2;

    // Doing proper checks with references
    Feline *feline_ptr_1{dynamic_cast<Feline *>(&animal_ref)};
    if (feline_ptr_1)
    {
        feline_ptr_1->do_some_feline_thingy();
    }
    else
    {
        std::cout << "Couldn't cast to Feline reference,Sorry." << std::endl;
    }
    std::cout << "-----------" << std::endl;

    do_something_with_animal_ptr(animal1);
    do_something_with_animal_ref(animal_ref);
    std::cout << "-----------" << std::endl;

    std::cout << "Done!" << std::endl;

    delete animal1;

    return 0;
}