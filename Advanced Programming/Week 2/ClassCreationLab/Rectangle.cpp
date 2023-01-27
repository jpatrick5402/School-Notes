// Class implementation file
#include "Rectangle.h"
#include <iostream>
#include <iomanip>

void Rectangle::setLength(double Length)
{
	length = Length;
}

void Rectangle::setWidth(double Width)
{
	width = Width;
}

double Rectangle::getLength()
{
	return length;
}

double Rectangle::getWidth()
{
	return width;
}

double Rectangle::calcArea()
{
	return (length * width);
}

void Rectangle::showData()
{
	std::cout << std::endl;
	std::cout << std::setw(11) << "Width: " << width << std::endl;
	std::cout << std::setw(11) << "Length: " << length << std::endl;
	std::cout << std::setw(11) << "Diagonal: " << calcDiagonal() << std::endl;
	std::cout << std::setw(11) << "Area: " << calcArea() << std::endl;
	std::cout << std::setw(11) << "Perimeter: " << calcPerimeter() << std::endl;
}

Rectangle::Rectangle()
{
	width = 0;
	length = 0;
}