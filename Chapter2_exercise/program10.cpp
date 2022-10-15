#include <iostream>
using namespace std;

/*
Miles per Gallon
A car holds 15 gallons of gasoline and can travel 375 miles before refueling. Write a
program that calculates the number of miles per gallon the car gets. Display the result
on the screen.
Hint: Use the following formula to calculate miles per gallon (MPG):
 MPG =Miles Driven/Gallons of Gas Used
*/
int main()
{
    float gallon = 15;
    float travel = 375;
    float MPG = travel / gallon;
    cout << "Number of miles per gallon is used = " << MPG << endl;
    return 0;
}