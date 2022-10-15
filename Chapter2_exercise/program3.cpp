#include <iostream>
using namespace std;

/*
Sales Tax
Write a program that will compute the total sales tax on a $95 purchase. Assume the
state sales tax is 4 percent and the county sales tax is 2 percent.
*/
int main()
{
    float sales_tax = 95;
    float state_tax_per = 0.04;
    float country_tax_per = 0.02;
    float state_tax = state_tax_per * sales_tax;
    float country_tax = country_tax_per * sales_tax;
    cout << "total tax price : " << state_tax * country_tax << endl;
    return 0;
}