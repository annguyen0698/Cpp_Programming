/*
Sizeof returns the number of bytes used to represent any type.
Sizeof can also be used to determine the sizeof compound types like arrays, structures and objects. 
In order to deteremine the sizeof a specific type, we provide the name of the type inside parentheses. 
ex:
-- sizeof(int)
-- sizeof(double)
-- sizeof(some_variable_)

the sizeof operator gets its information from two c++ include file : <climits> and <cfloat> 

*/

#include <iostream>
#include <climits>

using namespace std;

int main()
{
    cout << "sizeof information" << endl;
    cout << "==================" << endl;

    cout << "char: " << sizeof(char) << "bytes" << endl;
    cout << "int: " << sizeof(int) << "bytes" << endl;
    cout << "unsigned int: " << sizeof(unsigned int) << "bytes" << endl;
    cout << "short : " << sizeof(short) << "bytes" << endl;
    cout << "long: " << sizeof(long) << "bytes" << endl;
    cout << "long long: " << sizeof(long long) << "bytes" << endl;

    cout << "==================" << endl;

    cout << "Minimum value: " << endl;
    cout << "char: " << CHAR_MIN << endl;
    cout << "int: " << INT_MIN << endl;
    cout << "short: " << SHRT_MIN << endl;
    cout << "long: " << LONG_MIN << endl; 
    cout << "long long: " << LLONG_MIN << endl;
    
    cout << "==================" << endl;

    cout << "Maximum value: " << endl;
    cout << "char: " << CHAR_MAX << endl;
    cout << "int: " << INT_MAX << endl;
    cout << "short: " << SHRT_MAX  << endl;
    cout << "long: " << LONG_MAX << endl; 
    cout << "long long: " << LLONG_MAX << endl;

    //size of can also be use with variable: 
    cout << "========================" << endl;
    int age = 21; 
    cout << "age is: " << sizeof(age) << "bytes." << endl; 
    cout << "age is: " << sizeof age << "bytes." << endl;

    double wage = 22.24;
    cout << "wage is " << sizeof(wage) << "bytes." << endl; 
    cout << "wage is: " << sizeof wage << "bytes." << endl;

    return(0);
}