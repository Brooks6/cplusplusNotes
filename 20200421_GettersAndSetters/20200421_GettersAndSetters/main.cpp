//
//  main.cpp
//  20200421_GettersAndSetters
//
//  Created by HONGZHANG LIU on 20/4/20.
//  Copyright © 2020 HONGZHANG LIU. All rights reserved.
//

#include <iostream>

using namespace std;

class Movie{
private:
    string rating; //only code inside this class can call it
public:
    string title;
    string director;
    Movie(string aTitle, string aDirector, string aRating){
        title = aTitle;
        director = aDirector;
        setRating(aRating);
    }
    
    void setRating(string aRating){
        if(aRating == "G" || aRating == "PG" ||aRating == "PG-13" ||aRating == "R" || aRating == "NR"){
            rating = aRating;
        } else{
            rating = "NR"; //not rated
        }
    }
    
    string getRating(){
        return rating;
    }
};

int main(int argc, const char * argv[]) {
    
    Movie avengers("The Avengers", "Joss Whedon", "PG-13");
    avengers.setRating("R");
    
    cout << avengers.getRating() << endl;
    
    return 0;
}
