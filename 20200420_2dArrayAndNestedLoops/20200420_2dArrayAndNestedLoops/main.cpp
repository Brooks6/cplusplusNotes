//
//  main.cpp
//  20200420_2dArrayAndNestedLoops
//
//  Created by HONGZHANG LIU on 20/4/20.
//  Copyright © 2020 HONGZHANG LIU. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int num [3][2] = {
                     {1, 2},
                     {3, 4},
                     {5, 6}
    };
    
    for(int i = 0; i < 3; i++){
        
        for(int j = 0; j < 2; j++){
            cout << num [i][j];
        }
        
        cout << endl;
        
    }
    
    return 0;
}
