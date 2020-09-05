//
//  main.cpp
//  20200417_Variables
//
//  Created by HONGZHANG LIU on 17/4/20.
//  Copyright © 2020 HONGZHANG LIU. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    string CharacterName = "John";
    int CharacterAge;
    CharacterAge = 35;
    
        cout << "There once a man named " << CharacterName << "\n";
        cout << "He was " << CharacterAge << " years old\n";
       
    CharacterName = "Mike";
    CharacterAge = 20;
    
        cout << "He liked the name " << CharacterName << "\n";
        cout << "But didn't not like being " << CharacterAge << "\n";
    
    return 0;
}
