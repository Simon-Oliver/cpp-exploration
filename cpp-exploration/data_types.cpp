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

int main()
{
    char grade = 'A';
    int age = 29;
    double gpa = 4.5;
    bool isEnrolled = true;
    string sInfo = "Student Information";
    
    printStudent(sInfo, age);
    reverseString("hello");
    
    return 0;
}
