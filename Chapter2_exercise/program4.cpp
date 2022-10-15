#include <iostream>
using namespace std;

/*Restaurant Bill
Write a program that computes the tax and tip on a restaurant bill for a patron with
a $88.67 meal charge. The tax should be 6.75 percent of the meal cost. The tip should
be 20 percent of the total after adding the tax. Display the meal cost, tax amount, tip
amount, and total bill on the screen.*/

int main()
{
    float meal_charge = 88.67;
    cout << "the amount of meal is = " << meal_charge << endl;
    float tax_on_meal = 0.0675;
    float tax = meal_charge * tax_on_meal;
    cout << "tax on meal = " << tax << endl;
    float add_tax = meal_charge + tax;
    float tip_per = 0.20;
    float tip = add_tax * tip_per;
    cout << "Amount of tip = " << tip << endl;
    cout << "total bill is = " << tip + tax + meal_charge << endl;
    return 0;
}