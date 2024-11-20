/*
Return the index of a substring in a std::string
onbject.find(search_string)
*/
#include <iostream>
#include <string>

using namespace std;
int main()
{
    string s1 = "Hello, welcome to my program!!";

    //string search_string = "welcome";

    //Find the index of the substring 
    //size_t index  = s1.find(search_string);
    cout << s1.find("Hello,")<<endl;  // return 0 due to the first index is 0 
    cout << s1.find("welcome")<< endl;  // return 7 due to the first index of welcome is 7

    cout << endl;
    return(0);
}