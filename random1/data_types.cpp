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
#include <fstream>
#include <iostream>

using namespace std;

bool game_over = false;
int magic[3][2] = {{20,30},{30,40},{40,60}};

class Player
{
private:
    string name;
    int health = 100;
    int stamnia = 130;
    int attack[3][2] = {};
    
public:
  
    Player(string n, int atk[3][2]){
        name = n;
        for(int i = 0; i <=2 ; i++){
            for(int j = 0; j <= 1; j++){
                attack[i][j] = atk[i][j];
            };
        }
    }
    
    int do_damge(int select){
        stamnia -= attack[select][1];
        return attack[select][0];
    }
    
    
    void take_damage(int damage)
    {
        if(health - damage >= 0){
            health -= damage;
        } else {
            health = 0;
        }
    }
    
    int get_health()
    {
        return health;
    }
    
    int get_stamnia()
    {
        return stamnia;
    }
    
    void get_attack(){
        for(int i = 0; i <=2 ; i++){
            for(int j = 0; j <= 1; j++){
                std::cout<< "------ " << attack[i][j] << std::endl;
            };
        }
    }
    
    void write_to_file(){
        std::ofstream File("/Users/Simon/Desktop/Coding/cpp-exploration/data_test/test.txt");
        File << name << ", " << health;
        File.close();
        std::cout<< "------ " << "File was written!" << std::endl;
        
    }

    
};
int main()
{
    string name = "";
    std::cout << "Enter your Player name: ";
    std::cin >> name;
    
    Player player1(name,magic);
    Player player2("Enemy",magic);
    player1.get_attack();
   
    while(!game_over){
        int atk = 0;
        std::cout << "Choose your attack: ";
        std::cin >> atk;
        
        int dmg = player1.do_damge(atk);
        player2.take_damage(dmg);
        std::cout << "You have attacked Enenmy for "<< dmg << " damage." << std::endl;
        
        int take_dmg = player2.do_damge(2);
        player1.take_damage(take_dmg);
        std::cout << "Enemy attacks and does "<< take_dmg << " damage." << std::endl;
        
        std::cout << player1.get_health() << std::endl;
        
        if(player1.get_health() == 0){
            std::cout << "You loose!!!" << std::endl;
            player1.write_to_file();
            game_over = true;
        }else if(player2.get_health() == 0){
            std::cout << "You Win!!!" << std::endl;
        }
        
        
        
    }
   
    
  
    
    
    
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
