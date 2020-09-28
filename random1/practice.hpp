//
//  practice.hpp
//  cpp-exploration
//
//  Created by Simon St. on 16/8/20.
//  Copyright © 2020 Simon St. All rights reserved.
//

#ifndef practice_hpp
#define practice_hpp

#include <stdio.h>
#include <string>
using namespace std;

double power(double num, int pow);
string getDayOfWeek(int dayNum);
void printStudent(string info, int age);

class Book{
    public:
        string title;
        string author;
        int pages;
        int rating;
        Book(string aTitle, string aAuthor, int aPages, int aRating);
};

class Student{
    public:
        string name;
        string major;
        double gpa;
        Student(string aName, string aMajor, double aGpa);
        bool hasHonors();
};


class Movie{
    private:
        string ratingAge;
    
    public:
        string title;
        string director;
        
        Movie(string aTitle, string aDirector, string aRatingAge);
        void setRating(string aRating);
        string getRating();
};


class Chef{
    public:
    void makeSalad();
    void makeChicken();
};

class ItalianChef : public Chef{
    public:
        void makePasta();
        void makePizza();
};


#endif /* practice_hpp */
