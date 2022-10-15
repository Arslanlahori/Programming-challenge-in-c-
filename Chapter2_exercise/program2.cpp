
#include <iostream>
using namespace std;

/*Sales Prediction
The East Coast sales division of a company generates 58 percent of total sales. Based
on that percentage, write a program that will predict how much the East Coast division
will generate if the company has $8.6 million in sales this year. */

int main()
{
    float given_per = 0.58;
    float sale_price = 8.6;
    float prediction_coast;
    prediction_coast = given_per * sale_price;
    cout << "this is prediction sale price at given percentages : " << prediction_coast << endl;
    return 0;
}
