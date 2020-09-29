//
//  bookstore.cpp
//  cpp-exploration
//
//  Created by Simon St. on 28/9/20.
//  Copyright © 2020 Simon St. All rights reserved.
//

#include "bookstore.hpp"
#include <iostream>

int main()
{

    int currVal = 0;
    int val = 0;
    
    if(std::cin >> currVal){
        int count = 1;
        
        while(std::cin >> val){
            if(val == currVal){
                ++count;
            }
            else {
                std::cout << currVal << " " << count << std::endl;
                currVal = val;
                count = 1;
            }
        }
        std::cout << currVal << " " << count << std::endl;
        std::cout << "Done !" << std::endl;
    }
    
    return 0;
}
