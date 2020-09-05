//
//  main.cpp
//  20200420_ConstructorFunctions
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
};

int main(int argc, const char * argv[]) {
    
    Student stu1;
    cout << stu1.name << endl;
    cout << stu1.id << endl;
    cout << stu1.gender << endl;
    
    Student stu2("Brooks", 1, "male");
    cout << stu2.name << endl;
    cout << stu2.id << endl;
    cout << stu2.gender << endl;
    
    return 0;
}
