//
//  makepoint.c
//  
//
//  Created by Nils-erik Engen on 18.09.2017.
//
//

#include "makepoint.h"

//makepoint: make a point from x and y components
struct point makepoint(int x, int y)
{
    struct point temp;
    
    temp.x = x;
    temp.y = y;
    return temp;
}


//addpoint; add two points
struct point addpoint(struct point p1, struct point p2)
{
    p1.x += p2.x;
    p1.y += p2.y;
    return p1;
}
