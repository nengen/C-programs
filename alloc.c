//
//  alloc.c
//  
//
//  Created by Nils-erik Engen on 18.09.2017.
//
//

#include "alloc.h"
#define ALLOCSIZE 10000 //size of available space

static char allocbuff[ALLOCSIZE]; //storage for alloc
static char *allocp = allocbuff; //next free position

char *alloc(int n) //return pointer to n characters
{
    if(allocbuf + ALLOCSIZE - allocp >= n){ //it fits
        allocp += n;
        return allocp - n; //old p
    } else{
        return 0;
    }

    void afree(char *p)//free storage poitned to by p
    {
        if(p >= allocbuff && p < allocbuff + ALLOCSIZE){
            allocp = p;
        }
    }
}
