/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Alexandra Ramlogan
 *  Chapter 6 Exercise 4
 */

//#include "std_lib_facilities.h"

#include <iostream>
#include <vector>
#include <string>

using namespace std;

//class
class Name_Value
{
public:
    string name;
    int value;

    Name_Value(string n, int val)
        : name(n), value(val) {}
};

void print(vector<Name_Value> vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i].name << "," << vec[i].value << "\n";
    }
}

int main(void)
{
    //variables
    string name;
    int value;
    vector<Name_Value> vec; //vec is for the vector

    //while there is input, and noName is not input, and value is equal to 0
    while (cin >> name >> value && name != "NoName" && value == 0)
    {
        //per each while loop iteration, a for loop of the size of the vectors will
        //go through each vector to ensure there are no duplicates
        for (int i = 0; i < vec.size(); ++i) //while i is less than the vec size
        {
            if (name == vec[i].name) //if they're the same, that means it occured twice
            {
                cout << name << " appears twice\n";
                continue; //keep the loop going
            }
        }
        //push back vec
        vec.push_back(Name_Value(name, value));
    }

    //print out the names
    print(vec);

    return 0;
}
