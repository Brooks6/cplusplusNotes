//
//  main.cpp
//  20200420_ObjectFunction
//
//  Created by HONGZHANG LIU on 20/4/20.
//  Copyright © 2020 HONGZHANG LIU. All rights reserved.
//

#include <iostream>

using namespace std;

class Student{
public:
    string name;
    int id;
    string gender;
    Student(){
        name = "no name";
        id= 0;
        gender = "unknow";
    }
    Student(string aName, int Aid, string aGender){
        name = aName;
        id = Aid;
        gender = aGender;
    }
    
    string judgeInput(){
        if(id >= 0){
            return "legal input";
        } else{
            return "ilegal input";
        }
    }
};

int main(int argc, const char * argv[]) {
    
    Student stu1("Brooks", 1, "male");
    Student stu2("hack", -1, "???");
    
    cout << "stu1: " << stu1.judgeInput() << endl;
    cout << "stu2: " << stu2.judgeInput() << endl;
    
}

