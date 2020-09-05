//
//  main.cpp
//  20200720_referenceExercise
//
//  Created by HONGZHANG LIU on 20/7/20.
//  Copyright © 2020 HONGZHANG LIU. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    //int &rval2 = ival;
    int i = 0, &r1 = i; double d = 0, &r2 = d;
    r2 = 3.14159;
    r2 = r1;
    i = r2;
    r1 = d;
    
    return 0;
}
