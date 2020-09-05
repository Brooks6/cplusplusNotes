//
//  main.cpp
//  20200715_unsignedTypesExercise
//
//  Created by HONGZHANG LIU on 15/7/20.
//  Copyright © 2020 HONGZHANG LIU. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    unsigned u = 10, u2 = 42 , u3 = -1;
    cout << u2 - u << endl;
    cout << u - u2 << endl; // -1 = 4294967295
    cout << u3 << endl;
    return 0;
}
