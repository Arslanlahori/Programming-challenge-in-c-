#include <iostream>
using namespace std;

/*
A customer in a store is purchasing five items. The prices of the five items are
Price of item 1 = $15.95
Price of item 2 = $24.95
Price of item 3 = $6.95
Price of item 4 = $12.95
Price of item 5 = $3.95
Write a program that holds the prices of the five items in five variables. Display each
item’s price, the subtotal of the sale, the amount of sales tax, and the total. Assume the
sales tax is 7%.

*/
int main()
{
    float item1 = 15.95;
    float item2 = 24.95;
    float item3 = 6.95;
    float item4 = 12.95;
    float item5 = 3.95;
    float sale_tax = 0.07;
    cout << "price of item1 = " << item1 << endl;
    cout << "price of item2 = " << item2 << endl;
    cout << "price of item3 = " << item3 << endl;
    cout << "price of item4 = " << item4 << endl;
    cout << "price of item5 = " << item5 << endl;
    float subtotal = item1 + item2 + item3 + item4 + item5;
    cout << "the subtotal of sale is = " << subtotal << endl;
    float item1_tax = sale_tax * item1;
    cout << "tax on item1 = " << item1_tax << endl;
    float item2_tax = sale_tax * item2;
    cout << "tax on item2 = " << item2_tax << endl;
    float item3_tax = sale_tax * item3;
    cout << "tax on item3 = " << item3_tax << endl;
    float item4_tax = sale_tax * item4;
    cout << "tax on item4 = " << item4_tax << endl;
    float item5_tax = sale_tax * item5;
    cout << "tax on item5 = " << item5_tax << endl;
    float total_tax = item1_tax + item2_tax + item3_tax + item4_tax + item5_tax;
    cout << "the total tax on five items is = " << total_tax << endl;
    return 0;
}