/*
shipping calculation
ask the user for package dimention in inches 
length, width, height -- thesse should be integers 

All dimention must be 10 inches or less or we can not ship it 

base cost is $2.50
if the package volumn is greater than 100 cubic inches there is a 10% surcharge
if the package volumn is greater than 500 cubic inches there is a 25% surcharge 
*/
#include <iostream> 

using namespace std; 

int main() {
    int length, width, height;
    double base_cost = 2.50;
    const int tier1_threshold = 100; 
    const int tier2_threshold = 500; 
    int max_dimension_length = 10;

    double tier1_surcharge = 0.10;
    double tier2_surcharge = 0.25;

    int package_volume = 0;
    double package_cost = 0;

    cout << "Welcome to the package cost calculator!" << endl; 
    cout << "Enter package length, width, and height (separated by spaces): ";
    cin >> length >> width >> height; 
    cout << endl; 

    if (length > max_dimension_length || width > max_dimension_length || height > max_dimension_length) {
        cout << "Sorry, package rejected due to dimension exceeded." << endl; 
    } else { 
        package_volume = length * width * height;
        package_cost = base_cost;

        if (package_volume > tier2_threshold) {
            package_cost += base_cost * tier2_surcharge;
            cout << "Your package will have a 25% surcharge." << endl;
        } else if (package_volume > tier1_threshold) {
            package_cost += base_cost * tier1_surcharge;
            cout << "Your package will have a 10% surcharge." << endl;
        }

        cout << "The total cost of shipping your package is: $" << package_cost << endl;
    }

    cout << endl;
    return(0);
}