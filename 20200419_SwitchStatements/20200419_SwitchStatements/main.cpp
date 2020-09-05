//
//  main.cpp
//  20200419_SwitchStatements
//
//  Created by HONGZHANG LIU on 19/4/20.
//  Copyright © 2020 HONGZHANG LIU. All rights reserved.
//

#include <iostream>

using namespace std;

string getDayOfWeek(int num);

int main(int argc, const char * argv[]) {
    
    cout << getDayOfWeek(1) << endl;
    
    return 0;
}

string getDayOfWeek(int num){
    
    string dayName;
    
    switch (num) {
        case 1:
            dayName = "Monday";
            break;
        case 2:
            dayName = "Tuesday";
            break;
        default:
            dayName = "invaild input";
            break;
    }
    
    return dayName;
}
