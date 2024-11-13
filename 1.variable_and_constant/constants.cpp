/*
Frank's carpet cleaning service 
Charges $30 per room 
Sales tax rate is 6%
Estimates are valid for 30 days

Prompt the user for the number of rooms they would like cleaned and provide an estimate such as : 

Estimate for carpet cleaning service:
Number of rooms: 2
Price per room: $30
Cost: $60 
Tax: 3.6
=================================
total estimation: 63.6
This estimate is valid for 30 days 

Speudocode : 
Prompt the user to enter the number of rooms 
Display number of rooms
Display price per room

Display cost: (Number of room * price per room) 
Display tax: (number of room * price per room * tax rate)
Display total estimate: (number of room * price per room) + (number of room * price per room * tax rate)
Display estimate expiration time
*/

#include <iostream>

using namespace std;

int main() 
{
    cout << "Hello, welcome to Testing's Carpet Cleaning Service\n" << endl; 
    cout << "How many rooms would you like cleaned? ";

    int number_of_room = 0;
    cin >> number_of_room;

    const double price_per_room = 30.0;
    const double sales_tax = 0.06;
    const int estimate_expery = 30;  

    cout << "\nEstimate for cleaning service" << endl;
    cout << "Number of room: " << number_of_room << endl;
    cout << "Price per room: $" << price_per_room << endl;
    cout << "Cost: $" << price_per_room * number_of_room << endl;
    cout << "tax: $" << price_per_room * number_of_room * sales_tax << endl;
    cout << "==================================" << endl;
    cout << "Total estimate: $" << (price_per_room * number_of_room) + (price_per_room * number_of_room * sales_tax) << endl;
    cout << "THis estimate is valid for " << estimate_expery << " days" << endl;

    cout << endl;
    return (0);
}