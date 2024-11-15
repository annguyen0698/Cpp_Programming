/*
If (express1)
    if (express1)
        statement ;
    else (express1)
        statement;
if statement id nested within another if 
allow testing of multiple conditions
else belongs to the closest if 
*/

#include <iostream> 

using namespace std; 

int main() 
{
    int bill_score = 0; 
    int frank_score = 0; 

    cout << "Please enter Bill's score: ";
    cin >> bill_score; 
    cout << endl; 

    cout << "Please enter Frank's score:   ";
    cin >> frank_score;
    cout << endl; 

    if (bill_score == frank_score)
    {
        cout << "Look like a tie" << endl;
    }
    else 
    {
        if (bill_score > frank_score) 
        {
            cout << "Bill wins" << endl;
        }
        else 
        {
            cout << "Frank wins" << endl;
        }
    }


    cout << endl;
    return(0);
}