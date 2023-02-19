#include <iostream>

using namespace std;

int main()
{
    // Pointer variable: A variable whose content is an address
    // (that is, a memory address) and is therefore said to point
    // to a memory address.

    int *p; // declaring pointer also can be done with '*' anywhere
    int *p;
    int *p; // all valid

    int *p, q;  // pointer, int
    int *p, *q; // pointer, pointer

    char *ch; // stores the address of a char variable

    // '&' is the address of operator
    // & returns the address of the operand, &num
    int x;
    int *p;
    p = &x;

    // '*' is the dereferencing operator
    int x = 25;
    int *p;

    p = *x; // store address of x in p

    cout << *p << endl; // prints value stored in the memory space pointed to by p

    // &p, p, and *p all have different meanings.
    // &p means the address of p.
    // p means the content of p,
    // *p means the content of the memory location to which p points
}

// struct/class pointer example
struct studentType
{
    char name[26];
    double gpa;
    int sID;
    char grade;
};

studentType student;
studentType *studentPtr;

studentPtr = &student;

(*studentPtr).gpa = 3.9;
// also can use this
studentPtr->gpa = 3.9;

// pointers are initialize to 0 or NULL
p = NULL;
p = 0;

// null pointer can be converted to any value type
int *p = nullptr;

void dynamicVariable()
{
    // 'new' and 'delete' operators are dynamic

    // The operator new allocates memory (as a variable) of the designated type
    // and returns a pointer to it—that is, the address of this allocated memory.
    // Moreover, the allocated memory is uninitialized.
    new dataType;         // to allocate a single variable
    new dataType[intExp]; // to allocate an array of vars

    delete pointerVariable;   // deallocates memory
    delete[] pointerVariable; // deallocates an array
}