/*
while (expression)
    statement; 
while (expression)
{
    statements;
}
*/ 
#include <iostream> 

using namespace std; 

int main()
{
    cout << "==========Example 1 ===============";
    cout << endl;
    int num = 0; 
    cout << "Enter a positive number, starting to countdown: ";
    cin >> num;

    while (num > 0)
    {
        cout << num << endl; 
        --num; 
    }
    cout << "blast off" << endl; 
    cout << endl; 

    // EXAMPLE 2
    cout << "==========Example 2 ===============";
    cout << endl;
    bool done = false; 
    int number = 0; 
    while (done==false)
    {
        cout << "Enter a number between 1 and 5: ";
        cin >> number;
        if (number <= 1 || number >=5)
            cout << "Out of range, please try again" << endl;
        else 
        {
            cout << "Thank you" << endl; 
            done = true;
        }
    }

    cout << endl; 
    return(0);
}