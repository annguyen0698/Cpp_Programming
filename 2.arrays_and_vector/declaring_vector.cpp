/*
DEFINITION
-- container in the Cpp standard Template Library
-- An array that can grow and shrink in the size at execution time.
-- Provides similar semantics and syntax as arrays
-- Very efficient
-- Can provide bounds checking
-- Can use lots of cool functions like sort, reverse, find, and more
================================================
DECLARING 
#include <vector>
using namespace std;

vector <char> vowels;
vector <int> test_score;

Ex:
vector <char> vowels (5);   //tell compiler that you want 5 int
vector <int> test_score (10)

vector <char> vowel {'a','e', 'i' ,'o', 'u'};
vector <int> test_score {100,200,300,400,500};
vector <double> hi_temperatures (365, 80.0);
There are also many other ways to declare vectors.
You can declare a vector to be a copy of an array or a copy of another vector.
================================================
CHARACTERISTICS: 
-- dynamic size
-- Elements are all the same type 
__ Stored contiguosly in memory 
__ Individual elements can be accessed by their position or index 

-- First element is at index 0 
-- Last element is at index size -1

-- [] - no cheking to see if you are out of bounds 
-- Provides many usefull function that do bounds check 

-- Elements initialized to zero 
-- Very efficient 
-- Iteration (looping is often used to process )

*/