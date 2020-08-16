//
//  practice.cpp
//  cpp-exploration
//
//  Created by Simon St. on 16/8/20.
//  Copyright © 2020 Simon St. All rights reserved.
//

#include "practice.hpp"
#include <stdio.h>
#include <string>
#include <iostream>
#include "reverseString.h"


using namespace std;

void printStudent(string info, int age)
{
    cout << info << " " << age << endl;
}

double power(double num, int pow){
    double result = 1;
    for (int i = 0; i < pow; i++) {
        result = result * num;
    }
    
    return result;
}

string getDayOfWeek(int dayNum){
    string dayName;
    
    switch (dayNum) {
        case 0:
            dayName = "Monday";
            break;
            
        default:
            dayName = "Not a Weekday";
            break;
    }
    
    return dayName;
}



Book::Book(string aTitle, string aAuthor, int aPages, int aRating){
title = aTitle;
author = aAuthor;
pages = aPages;
rating = aRating;
}

Student::Student(string aName, string aMajor, double aGpa){
    name = aName;
    major = aMajor;
    gpa = aGpa;
}

bool Student::hasHonors(){
    if(gpa >= 3.8){
        return true;
    }
    return false;
};


Movie::Movie(string aTitle, string aDirector, string aRatingAge){
    title = aTitle;
    director = aDirector;
    setRating(aRatingAge) ;
}

void Movie::setRating(string aRatingAge){
    if (aRatingAge == "P" || aRatingAge == "PG" || aRatingAge == "R" || aRatingAge == "PG-13" || aRatingAge == "NR"){
        ratingAge = aRatingAge;
    } else {
        ratingAge = "NR";
    }
};

string Movie::getRating(){
    return ratingAge;
}
