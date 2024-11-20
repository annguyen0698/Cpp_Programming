/*
Substitution cipher 

write the program that ask the user to enter a secret message 

encrypt this message using the substitution cipher and display the encrypted message
then decrypted the encrypted message back to the original message 

May use the two strings below for your substitution.

for example to encrypt you can replace the character at position n in alphabet 
with the character with the position n in the key
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    // Substitution cipher key
    string alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string key =      "zyxwvutsrqponmlkjihgfedcbaZYXWVUTSRQPONMLKJIHGFEDCBA"; // Reverse substitution

    string secret_message;
    cout << "Please enter the message you would like to send *Note that this message will be encrypted*: ";
    getline(cin, secret_message);
    
    //encrypted message: 
    string encrypted_message = "";
    size_t index;
    for (char character : secret_message)     //range base for loop in cpp
    {
        index = alphabet.find(character);
        if (index != string::npos)
        {
            encrypted_message += key[index];
        }
        else 
        {
            encrypted_message += character;
        }
    }
    cout << "Encrypted message: " << encrypted_message << endl;

    //Decrypt the message 
    string decrypted_message;

    for (char character : encrypted_message)
    {
        index = key.find(character);
        if (index != string::npos)
        {
            decrypted_message += alphabet[index];
        }
        else 
        {
            decrypted_message += character;
        }
    }
    cout << "Decrypted Message: " << decrypted_message;


    cout << endl;
    return (0);
}