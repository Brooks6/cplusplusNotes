//
//  main.cpp
//  20200420_ExponentFunction
//
//  Created by HONGZHANG LIU on 20/4/20.
//  Copyright © 2020 HONGZHANG LIU. All rights reserved.
//

#include <iostream>

using namespace std;

double getPow(double powBasic, double powNum);

int main(int argc, const char * argv[]) {
    
    cout << getPow(4, 3) << endl;
    
    return 0;
}

double getPow(double powBasic, double powNum){
    
    double result = 1;
    
    for(int i = 0; i < powNum; i ++){
        
        result = result * powBasic;
        
    }
    
    return result;
}
