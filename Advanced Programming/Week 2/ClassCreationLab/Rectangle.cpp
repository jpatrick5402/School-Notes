// Class implementation file
#include "Rectangle.h"
#include <iostream>
#include <iomanip>
#include <cmath>

void Rectangle::setLength(double Length)
{
	length = Length;
}

void Rectangle::setWidth(double Width)
{
	width = Width;
}

double Rectangle::getLength() const
{
	return length;
}

double Rectangle::getWidth() const
{
	return width;
}

double Rectangle::calcArea() const
{
	return (getLength() * getWidth());
}

void Rectangle::showData() const
{
	std::cout << std::endl;
	std::cout << std::setw(11) << "Width: " << getWidth() << std::endl;
	std::cout << std::setw(11) << "Length: " << getLength() << std::endl;
	std::cout << std::setw(11) << "Diagonal: " << calcDiagonal() << std::endl;
	std::cout << std::setw(11) << "Area: " << calcArea() << std::endl;
	std::cout << std::setw(11) << "Perimeter: " << calcPerimeter() << std::endl;
	std::cout << std::endl;
}

Rectangle::Rectangle()
{
	width = 0;
	length = 0;
}

double Rectangle::calcDiagonal() const
{
	return (sqrt(pow(getWidth(), 2) + pow(getLength(), 2)));
}

double Rectangle::calcPerimeter() const
{
	return ((2 * getWidth()) + (2 * getLength()));
}