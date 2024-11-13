/* cout, cin, cerr, and clog are objects representing streams
-- Cpp uses a stream abstraction to handle IO on devices like the console and keyboard
-- cout is an output stream that defaults to the console or the screen
-- cerr and clog are also ouput streams that default to standard error and standard log, respectively.
-- and finaly, cin is an input streams that defaults to the keyboard
-- The insertion operator is used with output streams and the extraction operator is used with input streamss

// insert the data into the cout stream: 
cout << data;
// can be chained 
cout << "data 1 is" << data1;
//Does not automatically add line breaks
cout << "data 1 is" << data1 << endl;
cout << "data 1 is " << data 1 << "\n";
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "_____________Hello World Example___________" << endl;
    cout << "Hello World!" << endl;
    cout << "Hello" << " World" << endl;
    cout << "Hello" << " World\n";
    cout << "Hello\nOut\nThere" <<endl;

    //read 1 integer
    cout << "_______________EXAMPLE 1________________" << endl;

    int numex11; 
    cout << "Enter an integer: ";                   //prompt the user to enter an integer
    cin >> numex11;                                    // reading an integer using the extraction operator.
                                                    // extract integer from the input stream abd store in num1
    cout << "You entered: " << numex11 << endl;
    /*
    Remember :  cin is by default tied to your keyboard.
    we can redirect it as we wish but by default it's the keyboard. 
    -- characters are read form the your keyboard, they are not read directly by cin, they're stored in a buffer => make the program more efficient.
    It will only going to process what makes sense to be the typr of varibale.
     */

    //read 2 numbers: This example has problem if you type in 100 and 200 in the first integer. buffer will be 100_200. it will not wait to recieve the 2nd input
    cout << "_______________EXAMPLE 2________________" << endl;    
    int numex21;
    int numex22;
    cout << "Enter first interger: ";
    cin >> numex21; 
    cout << "Enter second number: ";
    cin >> numex22;

    cout << "You entered " << numex21 << " and " << numex22 << endl; 

    //read 2 number in another way: 
    cout << "_______________EXAMPLE 3________________" << endl;
    int num_ex_31;
    int num_ex_32;
    cout << "Enter 2 integers separated with a space: ";
    cin >> num_ex_31 >> num_ex_32;
    cout << "You entered " << num_ex_31 << " and " << num_ex_32 << endl;


    cout << "_______________EXAMPLE 4________________" << endl;
    double num_ex_41;
    cout << "Enter a double: ";
    cin >> num_ex_41;

    cout << "You entered: " << num_ex_41 << endl;



    return(0);
}