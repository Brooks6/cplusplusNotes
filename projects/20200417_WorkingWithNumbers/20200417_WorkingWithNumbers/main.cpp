//
//  main.cpp
//  20200417_WorkingWithNumbers
//
//  Created by HONGZHANG LIU on 17/4/20.
//  Copyright © 2020 HONGZHANG LIU. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[]) {
    
    cout << 10 % 4 << endl;
    cout << (4 + 5) * 10 <<endl;
    
    int wnum = 5;
    
    wnum -= 80;
    cout << wnum << endl;
    
    cout << 10 / 3 << endl; // 3
    cout << 10.0 / 3.0 << endl; //3.3333
    
    cout << pow(2, 3) << endl; //2^3
    cout << sqrt(25) << endl; //
    cout << round(4.4) << endl; //4 out 5 in
    cout << round(4.6) << endl;
    cout << ceil(4.1) << endl; //to next whole number
    cout << floor(4.1) << endl; // down to last whole number
    cout << fmax(3,10) << endl; //get bigger one
    cout << fmin(3,10) << endl; //get smaller one
    
    
    return 0;
}
