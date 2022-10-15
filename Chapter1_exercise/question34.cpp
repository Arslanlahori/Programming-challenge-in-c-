#include <iostream>
using namespace std;
/*
The variable j starts with the value 10.
 The variable k starts with the value 2.
 The variable l starts with the value 4.
 Store the value of j times k in j.
 Store the value of k times l in l.
 Add j and l, and store the result in k.
 Display the value in k on the screen.
*/

int main()
{
    int j = 10;
    int k = 2;
    int l = 4;
    j = j * k;
    l = k * l;
    k = j + l;
    cout << "value of k = " << k << endl;
}