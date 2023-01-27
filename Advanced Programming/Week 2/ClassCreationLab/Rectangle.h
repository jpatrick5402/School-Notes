// Class declaration file
#include <cmath>
#pragma once

class Rectangle
{
	double width;
	double length;

public:
	Rectangle();
	double calcPerimeter() 
	{
		return ((2*width)+(2*length));
	}
	double calcArea();
	double calcDiagonal()
	{
		return (sqrt(pow(width, 2) + pow(length, 2)));
	}
	void showData();
	void setWidth(double Width);
	double getWidth();
	void setLength(double Length);
	double getLength();
};