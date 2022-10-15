#include <iostream>
using namespace std;

/*
The variable a starts with the value 1.
 The variable b starts with the value 10.
 The variable c starts with the value 100.
 The variable x starts with the value 0.
 Store the value of c times 3 in x.
 Add the value of b times 6 to the value already in x.
 Add the value of a times 5 to the value already in x.
 Display the value in x on the screen.
*/

int main()
{
    int a = 1;
    int b = 10;
    int c = 100;
    int x = 0;
    x = c * 3;
    x = (b * 6) + x;
    x = (a * 5) + x;
    cout << "value of x is = " << x << endl;
}