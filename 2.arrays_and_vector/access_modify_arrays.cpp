/*
ACEESSING ARRAY ELEMENTS
array_name [element_index]
test_score[1]

int test_scores [5] {100,95,234,54,53};
cout << "first score at index 0: " << test_score[0] << endl; 
cout << "Second score at index 1: " << test_score[1] << endl; 
cout << "Third score at index 2: " << test_score[2] << endl;
...
======================================
CHANGING THE CONTENTS OF ARRAY ELEMENTS
array_name [element_index]

int test_score [5] {100, 95,34,344,234};

cin >> test_score[0];
....
cin >> test_score[4];
test_scores[0] = 90; // assignment statement
========================================
How does it work ? 
The name of the array represent the location of the first element of the array (index 0)
the [index] represents the offset from the beginning of the array 
c++ simply performs a calculation to find the correct elemnt 
remember - no bounds checking! 

*/

#include <iostream>
using namespace std;

int main()
{
    // basic access to an array
    char vowels[5] = {'a', 'e', 'o', 'u', 'i'}; // Use curly braces for array initialization
    cout << "The first vowel is: " << vowels[0] << endl; // Use 'vowels' instead of 'vowel'
    cout << "The last vowel is: " << vowels[4] << endl;
    cout << "======================================" << endl;

    // access and modify an array
    double hi_temp[] = {90.1, 89.2, 77.5, 81.6};
    cout << "The first high temperature is: " << hi_temp[0] << endl;

    hi_temp[0] = 100.5;
    cout << "The first high temperature after fix is: " << hi_temp[0] << endl;
    cout << "======================================" << endl;

    // access to an array, assign a number to it
    int test_score[5] = {100, 90, 80, 70, 60};
    cout << "First score at index 0: "<< test_score[0] << endl;
    cout << "First score at index 1: "<< test_score[1] << endl;
    cout << "First score at index 2: "<< test_score[2] << endl;
    cout << "First score at index 3: "<< test_score[3] << endl;
    cout << "First score at index 4: "<< test_score[4] << endl;

    cout << "\nEnter 5 test score: ";
    cin >> test_score[0];
    cin >> test_score[1];
    cin >> test_score[2];
    cin >> test_score[3];
    cin >> test_score[4];

    cout << "\nThe update array is: " << endl;
    cout << "First score at index 0: "<< test_score[0] << endl;
    cout << "First score at index 1: "<< test_score[1] << endl;
    cout << "First score at index 2: "<< test_score[2] << endl;
    cout << "First score at index 3: "<< test_score[3] << endl;
    cout << "First score at index 4: "<< test_score[4] << endl;

    return (0);
}
