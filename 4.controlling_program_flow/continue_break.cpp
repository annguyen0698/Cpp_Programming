    /*
    continue: 
    -- no further statements in the body of the loop are executed 
    -- control immediately goes directly to the beginning of the loop for the next iteration 

    break:
    -- no further statements in the body of the loop are excecuted
    -- loop is immediately terminated 
    -- control immediately goes to the statement following the loop
    */

#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    // Create a vector of integers
    vector<int> numbers = {10, 15, 20, 25, 30, 35, 40, 45, 50};

    cout << "Processing numbers in the vector:" << endl;

    // Iterate through the vector
    for (int num : numbers) {
        // Skip numbers that are divisible by 20
        if (num % 20 == 0) {
            cout << "Skipping " << num << " (divisible by 20)" << endl;
            continue; // Skip this iteration
        }

        // Break the loop if the number is greater than 40
        if (num > 40) {
            cout << "Stopping at " << num << " (greater than 40)" << endl;
            break; // Exit the loop
        }

        // Print the number
        cout << "Processing " << num << endl;
    }

    cout << "Loop terminated!" << endl;

    return (0);
}
