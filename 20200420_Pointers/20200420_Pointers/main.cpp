//
//  main.cpp
//  20200420_Pointers
//
//  Created by HONGZHANG LIU on 20/4/20.
//  Copyright © 2020 HONGZHANG LIU. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    string name = "Brooks";
    string *pName = &name;
    
    cout << name << endl; //Brooks
    cout << pName << endl; //address
    cout << *pName << endl; //Brooks
    
    return 0;
}
