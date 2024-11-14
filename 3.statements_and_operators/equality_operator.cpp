#include <iostream> 

using namespace std; 

int main()
{
    // Variable for example 1
    bool int_equal_result = false;
    bool int_not_equal_result = false; 
    int num_1, num_2; 
    // Variable for example 2
    bool char_equal_result = false;
    bool char_not_equal_result = false; 
    int char_1, char_2; 


    cout << boolalpha; //will display true false instead of 1 and 0 

    cout << "========= EXAMPLE 1 ===========" << endl;
    cout << "Enter two integers seperated by space: "; 
    cin >> num_1 >> num_2; 

    int_equal_result = (num_1 == num_2);
    int_not_equal_result = (num_1 != num_2);
    

    cout << "\nComparition result (equal): " << int_equal_result << endl; 
    cout << "Comparition result (not equal) " << int_not_equal_result << endl; 
    cout << endl;

    cout << "========= EXAMPLE 2 ===========" << endl;
    cout << "Enter two characters seperated by space: "; 
    cin >> char_1 >> char_2; 
    char_equal_result = (char_1 == char_2);
    char_not_equal_result = (char_1 != char_2);
    

    cout << "\nComparition result (equal): " << char_equal_result << endl; 
    cout << "Comparition result (not equal) " << char_not_equal_result << endl; 
    cout << endl;

    
    cout << endl; 
    return(0);
}