//
//  main.cpp
//  20200418_Functions
//
//  Created by HONGZHANG LIU on 18/4/20.
//  Copyright © 2020 HONGZHANG LIU. All rights reserved.
//

#include <iostream>

using namespace std;

void sayHi(string name, int age);

int main(int argc, const char * argv[]) {
    
    sayHi("Mike", 23);
    sayHi("Brooks", 18);
    
    return 0;
}

void sayHi(string name, int age){
    cout << "Hi " << name << " you are "<< age <<endl;
}
