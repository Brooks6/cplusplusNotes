//
//  main.cpp
//  20200709_forLoop
//
//  Created by HONGZHANG LIU on 9/7/20.
//  Copyright © 2020 HONGZHANG LIU. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int sum = 0;
    for (int i = -100; i <= 100 ; i++)
        sum += i;
    cout << sum;
    return 0;
}
