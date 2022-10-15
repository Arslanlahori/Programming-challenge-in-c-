#include <iostream>
using namespace std;

/*
 Land Calculation
One acre of land is equivalent to 43,560 square feet. Write a program that calculates
the number of acres in a tract of land with 391,876 square feet.
*/

int main()
{
    float one_acre = 43560;
    float land = 391876;
    float number_of_acre = land / one_acre;
    cout << "number of acre in land is = " << number_of_acre << "square feet" << endl;
    return 0;
}