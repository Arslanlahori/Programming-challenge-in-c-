#include <iostream>
using namespace std;
/*

Distance per Tank of Gas
A car with a 20-gallon gas tank averages 23.5 miles per gallon when driven in town
and 28.9 miles per gallon when driven on the highway. Write a program that calculates
and displays the distance the car can travel on one tank of gas when driven in town
and when driven on the highway.
Hint: The following formula can be used to calculate the distance:
 Distance = Number of Gallons * Average Miles per Gallon
*/

int main()
{
    float number_of_gallon = 20;
    float MPG_town = 23.5;
    float MPG_highway = 28.9;
    float distance_town = number_of_gallon * MPG_town;
    cout << "Car cover distance in town = " << distance_town << endl;
    float distance_highway = number_of_gallon * MPG_highway;
    cout << "Car cover distance in town = " << distance_highway << endl;

    return 0;
}