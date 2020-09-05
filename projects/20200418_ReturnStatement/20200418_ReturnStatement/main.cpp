//
//  main.cpp
//  20200418_ReturnStatement
//
//  Created by HONGZHANG LIU on 18/4/20.
//  Copyright © 2020 HONGZHANG LIU. All rights reserved.
//

#include <iostream>

using namespace std;

double cube(double num);

int main(int argc, const char * argv[]) {
    
    double answer;
    answer = cube (3);
    cout << answer << endl;
    
    return 0;
    
}

double cube(double num){
    double result = num * num * num;
    return result;
}
