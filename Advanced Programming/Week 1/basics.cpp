//*****************************************************************************************
// This repo has a bunch of different functions with a lot of comments to explore C++ in
// more detail
//
// Please Take a look!
//
//*****************************************************************************************

#include <iostream>
#include <cmath>

using namespace std;

void prototype_function()
{
    // functionType functionName(parameter list);
    // write a function prototype for each function your will write because your
    // main function will need to have variable declared before it runs
}

void proto_function(int num); // prototype function to prevent errors in main()

// main function is the entrypoint of the c++ program
int main()
{
}

void while_loop()
{
    int counter = 0;
    while (counter <= 10)
    {
        cout << "Hi";
        //"flag" - a true or false Loop Control Variable LCV
        //"sentinel" - a keyword or number LCV
        //"counter" - an incremental LCV
        counter++;
    }
}

void for_loop()
{
    // for loop syntax | for (init, condition, update) { }
    for (int i = 0; i < 10; i++)
    {
        cout << i << endl;
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

void switch_case()
{
    int num = 1;
    switch (num - 1)
    {
    case 0:
        /* code */
        break;

    default:
        break;
    }
}

void do_while()
{
    do
    {
        cout << "Hi";
    } while (true);
}

void break_and_continue()
{
    // break; // breaks out of a loop or skip remainder of switch statements
    // continue; // skips code after it and starts next iteration of loop
}

void nested_structure()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }
}

void functions()
{
    // Value Returning VS Void functions

    // return type | func name | type of param | param name
    // int example(int count){}

    // calling the function require that the return type is omitted
    // when calling a function, params' type is omitted as well

    // return statements stop the function
    // return expr;

    // to make an expression global:
    // extern int w;

    // A variable for which memory is allocated at block entry and
    // deallocated at block exit is called an automatic variable. A
    // variable for which memory remains allocated as long as the program
    // executes is called a static variable. Global variables are static
    // variables, and by default, variables declared within a block are automatic variables

    // Default params are made by initializing and assigning a value in the function declaration.
}

void references()
{
    // a reference is an alternate name to an existing variable
    int a = 3;
    int &r = a;
    // If a function needs to return more than one value, as a rule of
    // good programming style, you should change it to a void function
    // and use the appropriate reference parameters to return the values.
}

void pointers()
{
    // a pointer variable is stored in a random location, and the content of a pointer is the
    // memory address of another variable.
    int a = 3;   // creates var that contains 3
    int *p = &a; // creates a var that points to the address of variable a
}

int fact(int num) // This is a good example of recursion in C++. It is a tail recursion
{
    if (num == 0)
        return 1;
    else
        return num * fact(num - 1)
}