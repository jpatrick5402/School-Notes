#include <iostream> // std::cout
#include <fstream>  // std::ifstream
using namespace std;

void printFile(string filename);
string getFile(string filename);

int main()
{
    cout << getFile("test.txt");
}

void printFile(string filename)
{
    ifstream is(filename); // open file
    char c;
    while (is.get(c)) // loop getting single characters
        std::cout << c;
    is.close(); // close file
}

string getFile(string filename)
{
    string str;
    ifstream is(filename); // open file
    char c;
    while (is.get(c)) // loop getting single characters
        str += c;
    is.close(); // close file
    return str;
}