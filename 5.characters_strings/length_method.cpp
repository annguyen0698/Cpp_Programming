#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1 = "Frank";

    cout << s1.length() << endl; //5

    s1+=" James";
    cout << s1 << endl;     //Frank James

    cout << endl; 
    return(0); 
}