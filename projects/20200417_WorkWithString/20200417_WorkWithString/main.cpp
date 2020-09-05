//
//  main.cpp
//  20200417_WorkWithString
//
//  Created by HONGZHANG LIU on 17/4/20.
//  Copyright © 2020 HONGZHANG LIU. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    string phrase = "Brooks can achieve his dream!";
    phrase[28] = 's';
    
    cout << phrase << endl;
    cout << phrase.length() << endl;
    cout << phrase.find("dreams", 0) << endl;
    
    string phraseSubstr = phrase.substr(0, 6);
    cout << phraseSubstr << endl;
    
    return 0;
}
