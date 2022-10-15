#include <iostream>
using namespace std;

/* Average of Values
To get the average of a series of values, you add the values up and then divide the sum
by the number of values. Write a program that stores the following values in five different variables: 28, 32, 37, 24, and 33. The program should first calculate the sum
of these five variables and store the result in a separate variable named sum. Then, the
program should divide the sum variable by 5 to get the average. Display the average
on the screen. */

int main()
{
    int a = 28, b = 32, c = 37, d = 24, e = 33;
    double sum, average;
    sum = a + b + c + d + e;
    cout << "This is sum of five number = " << sum << endl;
    cout << "This is average of five number = " << (sum / 5) << endl;
    return 0;
}