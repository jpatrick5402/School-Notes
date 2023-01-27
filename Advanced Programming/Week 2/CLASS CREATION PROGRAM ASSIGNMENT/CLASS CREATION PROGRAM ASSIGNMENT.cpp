
#include <iostream>

using namespace std;

class Rectangle
{
    float width;
    float length;

public:
    Rectangle()
    {
        width = 0;
        length = 0;
    }

    float calcPerimeter()
    {
        return ((2 * width) + (2 * length));
    }
    float calcArea()
    {
        return (length * width);
    }
    float calcDiagonal()
    {
        return (sqrt(pow(width, 2) + pow(length, 2)));
    }
    float showData();
    float setWidth();
    float getWidth();
    float setLength();
    float getLength();
};