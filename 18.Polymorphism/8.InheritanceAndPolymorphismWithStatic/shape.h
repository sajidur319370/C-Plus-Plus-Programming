#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
#include <string_view>
class Shape
{
public:
    Shape();
    Shape(std::string_view description);
    virtual ~Shape();

    virtual void draw() const
    {
        std::cout << "Shape::Draw() called.Drawing: " << m_description << std::endl;
    }
    virtual int get_count() const
    {
        return m_count;
    }

    static int m_count;

protected:
    std::string m_description{" "};
};
#endif