//
//  main.cpp
//  20200418_GettingUserInput
//
//  Created by HONGZHANG LIU on 18/4/20.
//  Copyright © 2020 HONGZHANG LIU. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    /*
    int age;
    cout << "Enter your age: " << endl;
    cin >> age;
    cout << "Your are " << age << " years old" << endl;
    */
    
    string name;
    getline(cin, name);
    cout << "Hello " << name << endl;
    
    return 0;
}
