// Class declaration file
#include <cmath>
#pragma once

class Rectangle
{
	double width;
	double length;

public:
	
	Rectangle() {
		width = 0;
		length = 0;
	}
	double calcPerimeter() 
	{
		return ((2*width)+(2*length));
	}
	double calcArea()
	{
		return (length * width);
	}
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