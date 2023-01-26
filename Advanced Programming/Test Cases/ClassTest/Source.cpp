#include <iostream>
using namespace std;
class carType
{
public:
    carType(string Make, string Model, int Miles);
    int getMake();
    int getModel();
    int getMiles();

private:
    int miles;
    string make;
    string model;
};

carType::carType(string Make, string Model, int Miles)
{
    miles = Miles;
    make = Make;
    model = Model;
}

int carType::getMiles()
{
    return miles;
}

int main()
{
    carType myCar("toyota", "tundra", 1200);

    cout << myCar.miles;
}