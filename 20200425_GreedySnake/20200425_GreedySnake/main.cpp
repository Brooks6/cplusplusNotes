//
//  main.cpp
//  20200425_GreedySnake
//
//  Created by HONGZHANG LIU on 25/4/20.
//  Copyright © 2020 HONGZHANG LIU. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include "getch.h"

using namespace std;

bool gameOver;
const int width = 20;
const int height = 20;
int x,y,fruitX, fruitY, score;
int tailX[100], tailY[100];
int nTail= 0;
int preX, preY;
enum eDirection { STOP = 0, LEFT, RIGHT, UP ,DOWN};
eDirection dir;
string moveDir;

void Setup();
void Draw();
void Input();
void Logic();

int main(int argc, const char * argv[]) {
    
    Setup();
    while(!gameOver){
        Draw();
        Input();
        Logic();
        usleep(1);
    }
    
    return 0;
}

void Setup(){
    gameOver = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    fruitX = rand() % width; //random number from 0 to width
    fruitY = rand() % height;
    score = 0;
}

void Draw(){
    system("clear");
    for(int i = 0; i < width ; i++){
        cout << "#";
    }
    cout << endl;
    
    for(int i = 0; i < height ; i++){
        for(int j = 0; j < width ; j++){
            if(j == 0){
                cout << "#";
            }else if (j == width - 1){
                cout << "#";
            }else if(i == y && j ==x){
                cout << "O";
            }else if(i == fruitY && j == fruitX){
                cout << "F";
            }else{
                bool print = false;
                for(int k = 0; k < nTail; k++){
                    if(tailX[k] == j && tailY[k] == i){
                        cout << "O";
                        print = true;
                    }
                }
                if(!print){
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    
    for(int i = 0; i < width ; i++){
        cout << "#";
    }
    cout << endl;
    cout << score << endl;
}

void Input(){
        switch(getch()){
            case 'w':
                dir = UP;
                break;
            case 'a':
                dir = LEFT;
                break;
            case 's':
                dir = DOWN;
                break;
            case 'd':
                dir = RIGHT;
                break;
        }
}

void Logic(){
    srand((unsigned)time(NULL));
   /* int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;
    for(int i = 1; i< nTail; i++){
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }*/
    for(int i=nTail-1;i>0;i--)
    {
        tailX[i]=tailX[i-1];
        tailY[i]=tailY[i-1];
    }
    tailX[0]=x;
    tailY[0]=y;
    /*switch(dir){
        case LEFT:
            x--;
            break;
        case RIGHT:
            x++;
            break;
        case UP:
            y--;
            break;
        case DOWN:
            y++;
            break;
        default:
            break;
    }*/
    if(dir == LEFT){
        x--;
    }else if(dir == RIGHT){
        x++;
    }else if(dir == UP){
        y--;
    }else if(dir == DOWN){
        y++;
    }else{
        x++;
    }
    if(x >= width - 1 || x <= 0 || y < 0 || y >= height){
        gameOver = true;
    }
    for(int i = 0; i < nTail ; i++){
        if(tailX[i] == x && tailY[i] == y){
            gameOver = true;
        }
    }
    if(x == fruitX && y == fruitY){
        score += 10;
        fruitX = 1 + rand() % width ;
        fruitY = 1 + rand() % height ;
        nTail++;
    }
}
