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


using namespace std;


void printStudent(string info, int age)
{
    cout << info << " " << age << endl;
}

double cube(double num){
    double result = num;
    for (int i = 0; i <= 1; i++) {
        result = result * num;
    }
    
    return result;
}

int main()
{
    string word;
    
    cout << "Enter a word: ";
    getline(cin, word);
    string reversed = reverseString(word);
    cout << reversed << endl;
    
    int ranNum[] = {4, 5, 6, 8, 16, 32, 40};
     cout << ranNum[0] << endl;
    
    cout << cube(3) << endl;
    
    return 0;
}
