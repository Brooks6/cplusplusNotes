//
//  main.cpp
//  Building1BetterCalculator
//
//  Created by HONGZHANG LIU on 18/4/20.
//  Copyright © 2020 HONGZHANG LIU. All rights reserved.
//

#include <iostream>

using namespace std;

double getResult(double x, char y , double z);

int main(int argc, const char * argv[]) {
    
    int num1, num2;
    char op;
    
    cout << "Enter the first number" << endl;
    cin >> num1;
    cout << "Enter the operator" << endl;
    cin >> op;
    cout << "Enter the second number" << endl;
    cin >> num2;
    
    double finalResult = getResult(num1, op, num2);
    
    if(finalResult == -123456789.987654321){
        cout << "invalud operator" << endl;
    } else{
        cout << finalResult << endl;
    }
    
    return 0;
}

double getResult(double x, char z , double y){
    
    double result = 0.0;
    
    if(z == '+'){
        result = x + y;
    } else if(z == '-'){
        result = x - y;
    } else if(z == '*'){
        result = x * y;
    } else if(z == '/'){
        result = x / y;
    } else{
        result = -123456789.987654321;
    }
    
    return result;
}
