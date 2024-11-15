/*
if (expression) 
    statement;
--if the expression is true then execute the statement
--if the expression is false then skip the statement
*/

#include <iostream>
using namespace std; 
int main()
{
    int num = 0; 
    const int min = 10; 
    const int max = 100; 

    cout << "Enter a number between " << min << " and " << max << ": ";
    cin >> num; 
    cout << endl; 

    if (num >= min)
    {
        cout <<"==========IF STATEMENT 1============" << endl;
        cout << num << "is greater than or equal to " << min << endl;
        
        int diff (num-min);
        cout << num << " is " << diff << " greater than " << min << endl; 
        cout << endl;
    }

    if (num <= max)
    {
        cout <<"==========IF STATEMENT 2============" << endl;
        cout << num << "is less than or equal to " << max << endl;
        
        int diff (max - num);
        cout << num << " is " << diff << " smaller than " << max << endl; 
    } 

    if (num >= 10 && num <= 100)
    {
        cout <<"==========IF STATEMENT 3============" << endl;
        cout << num << " is in range" << endl; 
        cout << "This means statement 1 and 2 are also happened" << endl;
    }

    if (num == min || min == max)
    { 
        cout <<"==========IF STATEMENT 4============" << endl;
        cout << num << " is right on the boundary" << endl;
        cout << "This means statement 1, 2, 3 are also happened" << endl;
    }

    cout << endl; 
    return (0);
}