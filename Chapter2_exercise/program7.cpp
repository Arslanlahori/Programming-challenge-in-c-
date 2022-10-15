#include <iostream>
using namespace std;
/*
Ocean Levels
Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, write
a program that displays:
• The number of millimeters higher than the current level that the ocean’s level will be
in 5 years
• The number of millimeters higher than the current level that the ocean’s level will be
in 7 years
• The number of millimeters higher than the current level that the ocean’s level will be
in 10 years
*/
int main()
{
    // rising rate is in millimeter
    float rising_rate = 1.5;
    cout << "rising rate in five years : " << 1.5 * 5 << "  milimeters" << endl;
    cout << "rising rate in seven years : " << 1.5 * 7 << "  milimeters" << endl;
    cout << "rising rate in ten years : " << 1.5 * 10 << "  milimeters" << endl;
    return 0;
}