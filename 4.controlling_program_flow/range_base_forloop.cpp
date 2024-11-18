/*
for (var_type var_name : sequence )
    statement; // can use var_name 

for (var_type varname : sequence)
    {
        statements;
    }
int score = {100, 90, 97}
for (int score : scores)
    cour << score << endl;
*/

#include <iostream>

using namespace std;

int main() 
{
    // Define and initialize an array
    int scores[] = {10, 20, 30};

    // Range-based for loop to iterate over the array
    for (int score : scores)
        cout << score << endl;

    cout << endl;
    return 0;
}
