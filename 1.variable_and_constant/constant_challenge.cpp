/*
Testing's Cleaning Service:
Charges: 
    $25 per small room
    $35 per large room
Sales tax rate is 6%
Estimate are valid for 30 days

Promt the user for the number of small and large rooms they would like cleaned and provide an estimate such as 
Number of small rooms: 3 
Number of large rooms: 1
Price per small rooms: $25
Price per large rooms: $35
Cost: $110
Tax: $6.6
=======================
Total estimate : $116.6
This estimate is valid for 60 days
*/

#include <iostream>

using namespace std;
int main ()
{
    int small_rooms;
    int large_rooms; 
    const double sales_tax = 0.06;
    const double small_room_price = 25.0;
    const double large_room_price = 35.0;
    const int valid_days = 30; 
    cout << "Welcome to Testing's Cleaning Service" << endl; 
    cout << endl; 
    cout << "How many small rooms would you like cleaned? ";
    cin >> small_rooms;
    cout << endl;
    cout << "How many large rooms would you like cleaned? ";
    cin >> large_rooms;
    cout << endl;

    cout << "Number of small rooms: " << small_rooms << endl;
    cout << "Price per small room: $" << small_room_price << endl;
    cout << "Number of large rooms: " << large_rooms << endl; 
    cout << "Price per large room: $" << large_room_price << endl;
    cout << "Total room price: $" << small_rooms*small_room_price + large_rooms*large_room_price << endl;
    cout << "Sale tax: $" << (small_rooms*small_room_price + large_rooms*large_room_price)*0.06 << endl;
    cout <<  "========================" << endl; 
    cout << "Total Estimation: $" << (small_rooms*small_room_price + large_rooms*large_room_price) + ((small_rooms*small_room_price + large_rooms*large_room_price)*0.06) << endl;
    cout << "This estimation is valid for " << valid_days << " days" << endl; 
    cout << endl;

    return(0); 
}