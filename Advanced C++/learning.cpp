//*****************************************************************************************
// This repo has a bunch of different functions with a lot of comments to explore C++ in
// more detail
//
// Please Take a look!
//
//*****************************************************************************************
#include <iostream>
#include <string>

using namespace std;

void while_loop()
{
    int counter = 0;
    while (counter <= 10) {
        cout << "Hi";
        //"flag" - a true or false Loop Control Variable LCV
        //"sentinel" - a keyword or number LCV
        //"counter" - an incremental LCV
        counter++;
    }
}

void for_loop()
{
    // for loop syntax | for (init, compare, interate) { }
    for (int i = 0; i < 10; i++)
    {
        cout << "Hello";
    }
    
}

void converting_types()
{
    // A Cast operator is an unary operator which forces one data type
    // to be converted into another data type.
    //
    // Static Cast
    // Dynamic Cast
    // Const Cast
    // Reinterpret Cast

    float f = 3.5;
    int b = static_cast<int>(f); // turns float f into an int b
}

int main(){
}