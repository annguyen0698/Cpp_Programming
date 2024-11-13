/*
mixed type expression

=========
Ask the user to enter 3 integers
calculate the sum of integers then 
calculate the average of 3 integers

Display the 3 integers entered 
The sum of 3 integers and the average of 3 integers
*/

#include <iostream> 
using namespace std;
int main ()
{
    int total = 0; 
    int num1, num2, num3; 
    const int count = 3; 
    double average = 0.0; 

    cout << "Enter 3 integers seperated by spaces: ";
    cin >> num1 >> num2 >> num3; 
    cout << endl;  

    total = num1 + num2 + num3; 
    // convert the total from int into double by using static_cast<type>
    average = static_cast<double>(total)/ count; 
    cout << "The three numbers is: " << num1 << ", " << num2 << ", " << num3 << endl; 
    cout << "The total of 3 numbers is: " << total << endl; 
    cout << "The avarage of 3 numbers is: " << average << endl; 

    cout << endl; 
    return (0);
}