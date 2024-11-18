/*
(cond_exp) ? exp1 : exp2
cond_exp evaluated to a boolean expression
-- if cond_exp is true then the value of exp_1 is returned 
-- if cond_exp is false then the value of exp_2 is returned 

similar to if-else structure 

int a = 10;
int b = 20;
int score = 92;
int result = 0 ; 

result = (a>b) ? a:b 
result = (a<b) ? (b-a) : (a-b);
result = (b!=0)?  (a/b):0;
cout << (score >90) ? "Excellent" : "Good";
*/

#include <iostream>
using namespace std;

int main()
{
    int num_1 = 0; 
    int num_2 = 0; 

    cout << "========USING IF ELSE===============" << endl;
    cout << "Enter integer 1: ";
    cin >> num_1;
    if (num_1 % 2 == 0)
        cout << num_1 << " is an even number" << endl;
    else 
        cout << num_1 << " is an odd number" << endl;

    cout << "========USING CONDITIONAL OP===============" << endl;
    cout << "Enter integer 2: ";
    cin >> num_2;
    cout << num_2 << ((num_2 % 2 == 0) ? " is an even number!" : "  is an odd number!");

    cout << endl;
    return (0);
}
