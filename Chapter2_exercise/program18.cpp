#include <iostream>
using namespace std;

/*
Energy Drink Consumption
A soft drink company recently surveyed 16,500 of its customers and found that
approximately 15 percent of those surveyed purchase one or more energy drinks per
week. Of those customers who purchase energy drinks, approximately 58 percent of
them prefer citrus-flavored energy drinks. Write a program that displays the following:
• The approximate number of customers in the survey who purchase one or more
energy drinks per week
• The approximate number of customers in the survey who prefer citrus-flavored energy
drinks
*/

int main()
{
    int total_customer = 16500;
    float perc_of_purchase = 0.15;
    int number_of_customer_drink = total_customer * perc_of_purchase;
    cout << "Number of customer that purchases one or more drink = " << number_of_customer_drink << endl;
    float perc_of_purchase_citrus = 0.58;
    cout << "Number of customer that prefer citrus-flavored energy drink = " << number_of_customer_drink * perc_of_purchase_citrus << endl;
    return 0;
}