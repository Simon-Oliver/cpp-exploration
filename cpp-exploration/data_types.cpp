//
//  data_types.cpp
//  cpp-exploration
//
//  Created by Simon St. on 15/8/20.
//  Copyright © 2020 Simon St. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <iostream>
#include "reverseString.h"
#include "practice.hpp"

using namespace std;



int main()
{
    string word;
    
    // & in front of variables returns memory address
    cout << &word << endl;
    
    Book book1("Harry Potter", "JK", 500, 5);
    
    Student student1("Milo", "Design", 2.5);
    
    Movie movie1("Terminator", "unknown", "Dog");
    Movie movie2("Cats", "Max Muster", "PG-13");
    
    cout << movie1.getRating() << endl;
    cout << movie2.getRating() << endl;
    
    cout << student1.hasHonors() << endl;
    
    cout << book1.title << endl;
    
    cout << "Enter a word: ";
    // gets the whole input line - Doesn't get numbers
    getline(cin, word);
    string reversed = reverseString(word);
    cout << reversed << endl;
    
    // Arrays in C++ can't be mixed with other types!
    int ranNum[] = {4, 5, 6, 8, 16, 32, 40};
     cout << ranNum[0] << endl;
    
    cout << power(9, 2) << endl;
    
    int dayNum;
    
    cout << "Enter a day number: ";
    cin >> dayNum;
    cout << getDayOfWeek(dayNum) << endl;
    
    // Multi dimensional array
    int numGrid[3][2] = {
        {1,2},
        {2,3},
        {4,5}
    };
    
     cout << numGrid[0][1] << endl;
    
    return 0;
}
