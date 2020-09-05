//
//  main.cpp
//  20200709_ifStatementDuplicateChecking
//
//  Created by HONGZHANG LIU on 10/7/20.
//  Copyright © 2020 HONGZHANG LIU. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int iniNum=0, curNum = 0, count = 0;
    if(cin >> iniNum){
        count = 1;
        while(cin >> curNum){
            if(curNum == iniNum){
                count++;
            }
            else{
                cout << iniNum << "occurs" << count << "times" << endl;
                iniNum = curNum;
                count = 1;
            }
        }
        cout << iniNum << "occurs" << count << "times" << endl; // after the last input use end-of-file
    }
    return 0;
}
