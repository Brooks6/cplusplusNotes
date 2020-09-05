//
//  main.cpp
//  20200709_unknowNumberOfInputs
//
//  Created by HONGZHANG LIU on 9/7/20.
//  Copyright © 2020 HONGZHANG LIU. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int value = 0;
    int sum = 0;
    while(cin >> value)
        sum +=value;
    cout << sum; //end-of-file = control+d
    return 0;
}
