#include <iostream>
using namespace std;

class carType
{
public:
    carType(string Make, string Model, int Miles);
    string getMake();
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
    carType myCar("toyota", "tundra", 1200); // using a constructor to create myCar

    // cout << myCar.miles << endl;     // will not work because miles is private
    cout << myCar.getMiles() << endl; // this works because getMake() is in the class scope
    // now that there is myCar as an object, we can easily store manipulate/store this information
    // into a database of other cars
}