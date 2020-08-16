//
//  reverseString.cpp
//  cpp-exploration
//
//  Created by Simon St. on 15/8/20.
//  Copyright © 2020 Simon St. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

string reverseString (string phrase )
{
  // your Code is Here ... enjoy !!!
    string newStr;
    for (int i = phrase.length(); i >= 0; i--) {
        newStr += phrase[i];
    }
  return newStr ;
}
