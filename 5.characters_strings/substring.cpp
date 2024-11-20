/*
Extract a substring from a std::string 
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    // Original string
    string text = "Hello, C++ World!";

    // Extract a substring
    // Parameters: start position (index 7), length (3 characters)
    string substring = text.substr(7, 3);

    // Output the original string and the extracted substring
    cout << "Original string: " << text << endl;
    cout << "Extracted substring: " << substring << endl;

    // Demonstrate extracting the rest of the string
    string restOfString = text.substr(7); // No length specified
    cout << "Substring from position 7 to the end: " << restOfString << endl;

    return 0;
}
