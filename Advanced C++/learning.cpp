#include <iostream>
using namespace std;

void whileloop(){
    int counter = 0;
    while (counter <= 10) {
        cout << "Hi";
        //flag - a true or false Loop Control Variable LCV
        //sentinel - a keyword or number LCV
        //counter - an incremental LCV
        counter++;
    }
}

void forloop(){
    for (int i = 0; i < 10; i++)
    {
        cout << "Hello";
    }
    
}

int main(){
}