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
#include <vector>
#include <sstream>

using namespace std;

class Player
{
private:
    string name;
    int health = 100;
    int attack[3] = {10, 20, 30};
    bool start = true;
    
public:
  
    Player(string n){
        name = n;
    }
    
    int do_damge(){
        return 1;
    }
   

    
    
   
    
    
};
int main()
{
    Player player1("simon");
    
    
    
//    int A[5] = {1,2,3,55,99};
//
//    for(int i = 0; i < 5 ; i++){
//        printf("%d\n", A[i]);
//    }
//
//    int num = 5;
//    int *p = &num;
//    int test = 0b0000001;
//
//    cout << test <<endl;
    
    

    
//    if(argc != 1){
//        cout << "You entered " << argc << " arguments\n";
//    }
//
//    for(int i = 0; i < argc; i++ ){
//        cout << argv[i] << endl;
//    };
    
    
//    string word;
//
//    // & in front of variables returns memory address
//    cout << &word << endl;
//
//    Book book1("Harry Potter", "JK", 500, 5);
//
//    Student student1("Milo", "Design", 2.5);
//
//    Movie movie1("Terminator", "unknown", "Dog");
//    Movie movie2("Cats", "Max Muster", "PG-13");
//
//    cout << movie1.getRating() << endl;
//    cout << movie2.getRating() << endl;
//
//    Chef chef1;
//    chef1.makeSalad();
//
//    ItalianChef chef2;
//    chef2.makePasta();
//    chef2.makeSalad();
//
//    cout << student1.hasHonors() << endl;
//
//    cout << book1.title << endl;
//
//    cout << "Enter a word: ";
//    // gets the whole input line - Doesn't get numbers
//    getline(cin, word);
//    string reversed = reverseString(word);
//    cout << reversed << endl;
//
//    // Arrays in C++ can't be mixed with other types!
//    int ranNum[] = {4, 5, 6, 8, 16, 32, 40};
//     cout << ranNum[0] << endl;
//
//    cout << power(9, 2) << endl;
//
//    int dayNum;
//
//
//    string& ref = word;
//    cout << "Ref ---> "<< ref << "Mem Address: " << &ref << "Mem Address " << &word << endl;
//
//    cout << "Enter a day number: ";
//    cin >> dayNum;
//    cout << getDayOfWeek(dayNum) << endl;
//
//    // Multi dimensional array
//    int numGrid[3][2] = {
//        {1,2},
//        {2,3},
//        {4,5}
//    };
//
//     cout << numGrid[0][1] << endl;
    
    return 0;
}
