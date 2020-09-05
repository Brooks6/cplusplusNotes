//
//  main.cpp
//  20200421_Inheritance
//
//  Created by HONGZHANG LIU on 21/4/20.
//  Copyright © 2020 HONGZHANG LIU. All rights reserved.
//

#include <iostream>

using namespace std;

class chef{
public:
    void makeSalad(){
        cout << "make salad" << endl;
    }
    
    void makeFish(){
        cout << "make fish" << endl;
    }
};

class ChineseChef : public chef{
public:
    void makeNoodles(){
        cout << "make noodles" << endl;
    }
    
    void makeFish(){
        cout << "make fired fish" << endl;
    }
};

int main(int argc, const char * argv[]) {
    
    chef chef1;
    chef1.makeFish();
    
    ChineseChef chef2;
    chef2.makeSalad();
    chef2.makeFish(); //overwrite
    return 0;
}
