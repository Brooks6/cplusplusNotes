//
//  main.cpp
//  20200720_referenceAndPointerExercise
//
//  Created by HONGZHANG LIU on 21/7/20.
//  Copyright © 2020 HONGZHANG LIU. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int ival = 1024;
    int *pi = nullptr;
    int *pi2 = &ival;
    cout << pi << endl;
    cout << pi2 << endl;
    return 0;
}
