#include <iostream>
using namespace std;

/*
Circuit Board Price
An electronics company sells circuit boards at a 35 percent profit. Write a program that
will calculate the selling price of a circuit board that costs $14.95. Display the result
on the screen.

*/

int main()
{
    float profit = 0.35;
    float cost = 14.95;
    float selling_price = profit * cost;
    cout << "selling price is = " << selling_price << endl;
    return 0;
}