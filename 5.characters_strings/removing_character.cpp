/*
removing character - erase() and clear()
removes a substring of characters from std;:string 
object.erase(start_index, length)
*/
#include <iostream>
#include <string>

using namespace std; 

int main()
{
    string s1 = "This is a test";
    cout << s1 << endl;
    cout << s1.erase(0,5)<<endl; //is a test
    cout << s1.erase(5,4)<<endl;  //is a
    s1.clear(); //empties string s1

    cout << endl;
    return(0);
}