#include <iostream>
using namespace std;
/*
Stock Commission
Kathryn bought 750 shares of stock at a price of $35.00 per share. She must pay her
stockbroker a 2 percent commission for the transaction. Write a program that calculates and displays the following:
• The amount paid for the stock alone (without the commission)
• The amount of the commission
• The total amount paid (for the stock plus the commission)
*/

int main()
{
    int no_of_share = 750;
    float price_per_share = 35;
    float price_at_total_shares = no_of_share * price_per_share;
    cout << "price of total number of shares without commission = " << price_at_total_shares << endl;
    float per_commission = 0.02;
    float commission = per_commission * price_at_total_shares;
    cout << "amount of commission = " << commission << endl;
    cout << "The total amount paid = " << price_at_total_shares + commission;

    return 0;
}