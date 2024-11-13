/*
Increment ++ 
Decrement -- 
Increment or decrement the operand by 1 
Can be used with integer, floating-point types, and pointers 

Prefix: ++num;
Postfix: num++;

ALERT: NEVER USE THIS TWICE FOR THE SAME VARIABLE IN THE SAME STATEMENT. 
*/

#include <iostream>

using namespace std;

int main()
{
    // Variable using for example 1
    int counter = 10; 
    // Variable using for example 2 
    int counter2 = 10; 
    int result2 = 0; 
    // Variable using for example 3
    int counter3 = 10; 
    int result3 = 0; 

// ======================EXAMLE1=================================================
    cout << "EXAMPLE 1" << endl; 
    // Example 1: Increment counter by 1 using two methods
    cout << "Counter: " << counter << endl; 
    
    // Increment counter by 1 in the standard way
    counter = counter + 1; 
    cout << "Counter after incrementing by one using + 1: " << counter << endl; 

    // Increment counter using postfix increment
    counter++; 
    cout << "Counter after using postfix increment: " << counter << endl;

    // Increment counter using prefix increment
    ++counter; 
    cout << "Counter after using postfix increment: " << counter << endl;
    cout << endl;
// ======================EXAMLE2=================================================
    cout << "EXAMPLE 2 - PREINCREMENT" << endl; 
    // Example 1: Increment counter by 1 using two methods
    cout << "Counter 2: " << counter2 << endl; 
    cout << "Result 2: " << result2 << endl; 

    result2 = ++counter2; 
    cout << "Result2 after assigning result2 prefix increment counter2: " << result2 << endl; 
    cout << "Counter2 after assigning result2 to prefix increment counter2: " << counter2 << endl; 
    cout << endl;

// ======================EXAMLE3=================================================
    cout << "EXAMPLE 3 - POSTINCREMENT" << endl; 
    // Example 1: Increment counter by 1 using two methods
    cout << "Counter 3: " << counter3 << endl; 
    cout << "Result 3: " << result3 << endl; 

    result3 = counter3++; 
    cout << "Result3 after assigning result3 postfix increment counter3: " << result3 << endl; 
    cout << "Counter3 after assigning result3 to postfix increment counter3: " << counter3 << endl; 
    cout << "NOTE FOR POSTINCREMENT:" << endl; 
    cout << "Result is diffent because result is assign to counter 3 before counter3 is incremented!!" << endl;
    cout << endl; 
    
    
    return (0);
}
