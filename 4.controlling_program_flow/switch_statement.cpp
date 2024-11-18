/*
switch(integer_control_expr)
{
    case expression_1: statement_1; break;
    case expression_2: statement_2; break;
    case expression_3: statement_3; break;
    .....
    case expression_n: statement_n; break;
    default: statement default;
}
-- first we have switch method follow by the control expression inside parentheses.
    this control expression must evaluate to an integer type or an enumeration type
-- The case expressions must be constant expression that evaluate to integer or or integers literals
-- Once the match occur, all following section are executes until BREAK is reached the switch complete
-- default is optional but should be handle 

    enum Color = {red, brown, green};
    Color screen_color = green ; 

    switch (screen_color)
    {
    case red: cout << "red"; break;
    case brown: cout <<"brown"; break;
    case greean: cout << "green" breakl;

    default : cout << "Should never excecute"
    }

*/


/*
Ask the user which grade they expect on the exam and tell them what they need to score to get it
*/
#include <iostream> 

using namespace std;

#include <iostream>
using namespace std;

int main() 
{
    char letter_grade = 0; 

    cout << "Enter the letter grade you expect on the exam: ";
    cin >> letter_grade;
    cout << endl;

    switch(letter_grade)
    {
        case 'a':
        case 'A':
            cout << "You will need a 90 or above. Study hard!" << endl;
            break;
        case 'b':
        case 'B':
            cout << "You will need an 80 or above. Keep studying!" << endl;
            break;
        case 'c':
        case 'C':
            cout << "You will need a 70 or above. Don't give up!" << endl;
            break;
        case 'd':
        case 'D':
            cout << "You will need a 60 or above. Try to aim higher!" << endl;
            break;
        case 'f':
        case 'F':
            cout << "You'll need less than 60. Keep improving!" << endl;
            break;
        default:
           // cout << "Invalid grade entered. Please enter A, B, C, D, or F." << endl;
           // break;
        {   
           char confirm = 0;
           cout << "Are you sure?(Y/N): ";
           cin >> confirm; 
           cout << endl; 

            if (confirm == 'Y' || confirm == 'y')
                cout << "Ok, I guess you didn't study so you don't have to do anything!"<<endl;
            if (confirm == 'N' || confirm == 'n')
                cout << "illegal choice" << endl;
            break;
        }
    }
    cout << endl; 
    return(0);
}