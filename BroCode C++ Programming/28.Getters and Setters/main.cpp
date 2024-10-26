#include <iostream>
class Stove
{
private:
    double temperature = 0;

public:
    Stove(double temperature)
    {
        setTemperature(temperature);
    }
    int getTemperature()
    {
        return this->temperature;
    };
    void setTemperature(double temperature)
    {
        this->temperature = temperature;
    };
};
int main()
{
    // getters and setters
    Stove stove(10);
    std::cout << "Temperature: " << stove.getTemperature() << std::endl;
    ;

    return 0;
}