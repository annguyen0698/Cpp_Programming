#include <iostream>
#include <vector> 

using namespace std;

int main()
{
    // Declare two empty vector named vector 1 and vector 2 respectively 
    vector <int> vector_1;
    vector <int> vector_2;

    // Add element 10 and 20 to vector_1 using push back:
    vector_1.push_back(10);
    vector_1.push_back(20);

    //Display element of vector_1 using at method as well as its size using the size method 
    //using at
    cout << "Vector_1 element: ";
    cout << vector_1.at(0) << ", " ;
    cout << vector_1.at(1) << endl; 
    //display size
    cout << "Vector_1 contains: " << vector_1.size() << " elements." << endl; 

    //Add 100 and 200 to vector 2 using push back
    vector_2.push_back(100);
    vector_2.push_back(200);

    //Display vector_2 elements and size of vector 2: 
    cout << "\nVector 2: ";
    cout << vector_2.at(0) << ",";
    cout << vector_2.at(1) << endl;
    cout << "Vector 2 contains: " << vector_2.size() << " elements." << endl;

    //Declare an empty 2D vector and rmb that 2D vector is a vector of vector <int>
    vector <vector<int> > vector_2d;

    vector_2d.push_back(vector_1);
    vector_2d.push_back(vector_2);

    //Display element of vector 2d using at method:
    cout << "Vector 2D: ";
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl; 

    //Change vector 1 at (0) to 100
    vector_1.at(0) = 1000; 

    //Display vector_2d again : 
    cout << "Vector 2D after fixing: " << endl; 
    cout << vector_2d.at(0).at(1) << " " << vector_2d.at(0).at(1) << endl; 
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

    return(0);



}