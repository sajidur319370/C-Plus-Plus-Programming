#include <iostream>
class Car
{
public:
    std::string model;
    std::string color;
    int year;
    Car(int year)
    {
        this->year = year;
    }
    Car(std::string model, std::string color)
    {
        this->model = model;
        this->color = color;
    }
    Car(std::string model, std::string color, int year)
    {
        this->model = model;
        this->color = color;
        this->year = year;
    }
    void accelerate()
    {
        std::cout << "Car is running" << std::endl;
    }
    void brake()
    {
        std::cout << "Car is Stopped" << std::endl;
    }
};
int main()
{
    Car car1("Ford", "Red", 1967);
    Car car2("Mustang", "Yellow", 1956);
    Car car3("Corvette", "Green");
    Car car4(1959);

    std::cout << "Car-1 model: " << car1.model << std::endl;
    std::cout << "Car-1 color: " << car1.color << std::endl;
    std::cout << "Car-1 year: " << car1.year << std::endl;
    car1.accelerate();
    car1.brake();
    std::cout << "Car-2 model: " << car2.model << std::endl;
    std::cout << "Car-2 color: " << car2.color << std::endl;
    std::cout << "Car-2 year: " << car2.year << std::endl;
    car1.accelerate();
    car1.brake();
    std::cout << "Car-3 model: " << car3.model << std::endl;
    std::cout << "Car-3 color: " << car3.color << std::endl;
    car3.accelerate();
    std::cout << "Car-4 year: " << car4.year << std::endl;
    car4.brake();

    return 0;
}