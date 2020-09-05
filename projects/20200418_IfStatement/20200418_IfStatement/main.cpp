//
//  main.cpp
//  20200418_IfStatement
//
//  Created by HONGZHANG LIU on 18/4/20.
//  Copyright © 2020 HONGZHANG LIU. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    bool isMale = false;
    bool tall = true;
    
    if(isMale && tall){
        cout << "you are a tall male" << endl;
    } else if(isMale && !tall){
        cout << "you are a short man" << endl;
    } else if(!isMale && tall)
        cout << "you are tall but not a male" << endl;
    else{
        cout << "you are not male and not tall" << endl;
    }
    
    return 0;
}
