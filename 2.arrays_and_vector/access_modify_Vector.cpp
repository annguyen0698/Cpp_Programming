/*
ACCESSING VECTOR ELEMENTS -- ARRAY SYNTAX 
vector_name [element_index]
test_score [1]

vector <int> test_scores {100, 95, 99, 87, 88};

cout << "First score at index 0: " << Test_scores[0] << endl;
cout << "Second score at index 1: " << Test_score[1] << endl;
...
cout << "Fifth score at index 4: " << Test_score[4] << endl;
================================================
ACCESSING VECTOR ELEMENTS - VECTOR SYNTAX 
vector_name.at(element_index)
test_score.at(1)

vector <int> test_score {100, 95, 99, 87, 88};

cout << "First score at index 0: " << Test_scores.at(0) << endl;
cout << "Second score at index 1: " << Test_score.at(1) << endl;
...
cout << "Fifth score at index 4: " << Test_score.at(4) << endl;
=================================================
CHANGING THE CONTENTS OF VECTOR ELEMENTS - VECTOR SYNTAX 
vector_name.at(element_index)

vector <int> test_scores {100, 95, 99, 87, 88};
cin >> test_score.at(0)
cin >> test_score.at(1)
cin >> test_score.at(2)
cin >> test_score.at(3)
cin >> test_score.at(4)

test_scores.at(0) = 90; //assignment statement
===================================================

ADD NEW ELEMENT THE END OF THE VECTOR
-- vector_name.push_back(element) --

vector <int> test_score {100, 95, 99}   // size is 3

test_scores.push_back(80);          //100,95,99,80
test_scores.push_back(90);          //100,95,99,80,90
Vector will automatically allocate the required space!

====================================================



*/