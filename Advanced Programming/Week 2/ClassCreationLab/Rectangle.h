// Class declaration file

class Rectangle
{
	double width;
	double length;

public:
	Rectangle();
	double calcPerimeter() const;
	double calcArea() const;
	double calcDiagonal() const;
	void showData() const;
	void setWidth(double Width);
	double getWidth() const;
	void setLength(double Length);
	double getLength() const;
};