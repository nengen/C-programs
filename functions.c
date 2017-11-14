//
//  functions.c
//  
//
//  Created by Nils-erik Engen on 08.09.2017.
//
//

#include "functions.h"
#include <stdio.h>

int power(int m, int n);

//test power function

main()
{
    int i;
    
    for(i =0; i < 10; ++i)
        printf("%d %d %d\n", i ,power(2,i), power(-3,i));
    return 0;
}

//power

int power(int base, int n)
{
    int i, p;
    p = 1;
    for(i = 1; i <= n; ++i)
        p = p * base;
    return p;
}
