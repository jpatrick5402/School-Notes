// Class declaration file

class Rectangle
{
	double width;
	double length;

public:
	Rectangle();
	double calcPerimeter();
	double calcArea();
	double calcDiagonal();
	void showData();
	void setWidth(double Width);
	double getWidth();
	void setLength(double Length);
	double getLength();
};