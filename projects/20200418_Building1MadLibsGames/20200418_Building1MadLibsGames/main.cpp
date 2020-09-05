//
//  main.cpp
//  20200418_Building1MadLibsGames
//
//  Created by HONGZHANG LIU on 18/4/20.
//  Copyright © 2020 HONGZHANG LIU. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    string color, pluralNoun, celebrity;
    cout << "Enter a color: \n";
    getline(cin, color);
    cout << "Enter a plural noun: \n";
    getline(cin, pluralNoun);
    cout << "Enter a celebrity: \n";
    getline(cin, celebrity);
    
    cout << "Rose are " << color << "\n";
    cout << pluralNoun << " are blue\n";
    cout << "I love " << celebrity << "\n";
    
    return 0;
}
