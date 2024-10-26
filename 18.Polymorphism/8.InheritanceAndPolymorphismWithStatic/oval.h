#ifndef OVAL_H
#define OVAL_H
#include "shape.h"
#include <string_view>
class Oval : public Shape
{
public:
    Oval();
    Oval(double x_radius, double y_radius, const std::string_view description);
    virtual ~Oval();

    virtual int get_count() const override
    {
        return m_count;
    }
    static int m_count;

private:
    double m_x_radius{0};
    double m_y_radius{0};
};
#endif