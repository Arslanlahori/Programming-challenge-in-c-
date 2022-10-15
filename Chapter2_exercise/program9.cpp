#include <iostream>
using namespace std;

/*
Cyborg Data Type Sizes
You have been given a job as a programmer on a Cyborg supercomputer. In order to
accomplish some calculations, you need to know how many bytes the following data
types use: char, int, float, and double. You do not have any manuals, so you can’t
look this information up. Write a C++ program that will determine the amount of
memory used by these types and display the information on the screen.
*/
int main()
{
    cout << "the size of char = " << sizeof(char) << endl;
    cout << "the size of integer = " << sizeof(int) << endl;
    cout << "the size of float = " << sizeof(float) << endl;
    cout << "the size of double = " << sizeof(double) << endl;
}