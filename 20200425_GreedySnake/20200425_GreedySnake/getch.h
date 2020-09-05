//
//  getch.h
//  20200425_GreedySnake
//
//  Created by HONGZHANG LIU on 25/4/20.
//  Copyright © 2020 HONGZHANG LIU. All rights reserved.
//

#ifndef getch_h
#define getch_h

char getch()
{
char c;
system("stty -echo");
system("stty -icanon");
c=getchar();
system("stty icanon");
system("stty echo");
return c;
}
char getche()
{
char c;
system("stty -icanon");
c=getchar();
system("stty icanon");
return c;
}

#endif /* getch_h */
