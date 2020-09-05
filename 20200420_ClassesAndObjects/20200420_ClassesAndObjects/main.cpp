//
//  main.cpp
//  20200420_ClassesAndObjects
//
//  Created by HONGZHANG LIU on 20/4/20.
//  Copyright © 2020 HONGZHANG LIU. All rights reserved.
//

#include <iostream>

using namespace std;

class Book{
    public:
    string title;
    string author;
    int pages;
};

int main(int argc, const char * argv[]) {
    
    Book book1;
    book1.title = "fit ring adventure";
    book1.author = "Brooks";
    book1.pages = 500;
    
    Book book2;
    book2.title = "Harry Poter";
    book2.author = "JK Rowling";
    book2.pages = 700;
    
    cout << book1.author << endl;
    cout << book2.author << endl;
    
    return 0;
}
