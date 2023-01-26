#include <iostream>
class carType
{
public:
    carType(int, int, int);
    int getMake(const carType &thisCar);
    int getModel();
    double getMiles();

private:
    double miles;
};
int main()
{
}