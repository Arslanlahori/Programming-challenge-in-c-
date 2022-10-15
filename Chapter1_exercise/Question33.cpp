#include <iostream>
using namespace std;
/*
 The variable x starts with the value 0.
 The variable y starts with the value 5.
 Add 1 to x.
 Add 1 to y.
 Add x and y, and store the result in y.
 Display the value in y on the screen.
*/

int main()
{
    int x = 0;
    int y = 5;
    x = 1 + x;
    y = 1 + y;
    y = x + y;
    cout << "Value in y is = " << y << endl;
}