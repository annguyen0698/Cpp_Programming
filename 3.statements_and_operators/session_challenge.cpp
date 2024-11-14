/*
Write a program that asks the user to enter the following:

An integer representing the number of cents.
You may assume that the number of cents entered is greater than or equal to zero.

The program should then display how to provide that change to the user.

In the US:
1 dollar is 100 cents
1 quarter is 25 cents
1 dime is 10 cents
1 nickel is 5 cents
1 penny is 1 cent

Here is a sample run:

Enter an amount of cents: 92
You can provide this change as follows:
Dollars: 0
Quarters: 3
Dimes: 1
Nickels: 1
Pennies: 2

Feel free to use your own currency system.
Also, think about how you will solve this problem by using the modulo operation.
*/

/*
PSEUDOCODE:
To find how many dollars => change_amount / dollar_value (100) => get dollars
change_amount % dollar_value (100) => get remainder
remainder / quarter_value (25) => get quarters
remainder % quarter_value (25) => get new remainder
... continue similarly for dimes, nickels, and pennies
*/

#include <iostream>

using namespace std;

int main() 
{
    int change_amount = 0; 
    const int dollar_value = 100; 
    const int quarter_value = 25; 
    const int dime_value = 10; 
    const int nickel_value = 5;
    const int penny_value = 1; 

    cout << "Please enter an amount of cents that you would like to change: ";
    cin >> change_amount;

    int dollars, quarters, dimes, nickels, pennies;
    int remainder = change_amount;

    dollars = remainder / dollar_value; 
    remainder %= dollar_value;
    cout << "Dollars: " << dollars << endl;

    quarters = remainder / quarter_value; 
    remainder %= quarter_value;
    cout << "Quarters: " << quarters << endl; 

    dimes = remainder / dime_value; 
    remainder %= dime_value;
    cout << "Dimes: " << dimes << endl; 

    nickels = remainder / nickel_value; 
    remainder %= nickel_value;
    cout << "Nickels: " << nickels << endl; 

    pennies = remainder / penny_value; 
    remainder %= penny_value;
    cout << "Pennies: " << pennies << endl; 

    cout << endl;
    return 0; 
}
