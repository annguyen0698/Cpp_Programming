/*
for (initialization; condition; increment)
    statement;

for (initialization; conditionl, increment)
{
    statement(s);

    int i = 0;
    for (i = 1; i <= 5; ++i)
        cout << i << endl;

ex : int scorre = {100, 90, 87} 
        for  (int i = 0, i < 3, ++i)
        {
            cout << score[i] << endl; 
        }
        for (int i = 0, i <= 2, ++i)
        {
            cout << score[i] << endl;
        }
*/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int i;

    // Initialize the vector using push_back
    vector<int> nums;
    nums.push_back(10);
    nums.push_back(20);
    nums.push_back(30);
    nums.push_back(40);
    nums.push_back(50);

    // Loop from 1 to 100
    for (i = 1; i <= 100; ++i)
    {
        cout << i;
        if (i % 10 == 0)
        {
            cout << endl;
        }
        else
        {
            cout << " ";
        }
    }

    // Loop through the vector and print its elements
    for (i = 0; i < nums.size(); ++i)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
