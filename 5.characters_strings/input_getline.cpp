/*
cin only accept to the first space 
while getline will read entire line until \n
*/
#include <iostream>
#include <string>

using namespace std;
int main()
{    
    string s1;
    cout << "What is your last and first name? ";
    getline(cin, s1); //get entire line until \n
    cout<< "s1 using getine: "<< s1 << endl; 

    cout << endl;
    return(0);
}