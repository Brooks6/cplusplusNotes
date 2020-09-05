//
//  main.cpp
//  20200709_whileLoopExercise
//
//  Created by HONGZHANG LIU on 9/7/20.
//  Copyright © 2020 HONGZHANG LIU. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int sum = 0, val = 50;
    while(val <= 100){
        sum = sum + val;
        val++;
    }
    cout << sum << endl;
    
    int num = 10, n=0;
    while(n<=10){
        cout << num <<endl;
        num--;
        n++;
    }
    return 0;
}
