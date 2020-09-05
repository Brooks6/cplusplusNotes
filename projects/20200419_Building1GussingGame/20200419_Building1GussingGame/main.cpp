//
//  main.cpp
//  20200419_Building1GussingGame
//
//  Created by HONGZHANG LIU on 19/4/20.
//  Copyright © 2020 HONGZHANG LIU. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int secret = 821;
    int guess;
    int count = 1;
    bool outOfCount = false;
    
    cout << "Please have a try to guess the secret number" << endl;
    cin >> guess;
    
    while(guess != secret && !outOfCount){
       
        if(count <= 2){
            if(guess < secret){
                cout << "smaller than secret number, please enter again: " << endl;
                cin >> guess;
                count++;
            } else if(guess > secret){
                cout << "bigger than secret number, please enter again: " << endl;
                cin >> guess;
                count++;
            }
        } else{
            outOfCount = true;
        }
    }
    
    if(outOfCount){
        cout << "You lose!" << endl;
    } else{
        cout << "You win!" << endl;
    }
    
    return 0;
}
