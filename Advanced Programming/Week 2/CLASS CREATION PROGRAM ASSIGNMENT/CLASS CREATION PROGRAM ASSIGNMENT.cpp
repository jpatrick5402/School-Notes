
#include <iostream>

using namespace std;

int main()
{
    std::cout << "Hello World!\n";
}

class Rectangle
{
    Rectangle()
    {
        width = 0;
        length = 0;
    }
    
    float width;
    float length;
    
    float calcPerimetr()
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