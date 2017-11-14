//
//  inout.c
//  
//
//  Created by Nils-erik Engen on 08.09.2017.
//
//

#include "inout.h"
#include <stdio.h>

//copy input to output
/* 1st version
main()
{
    int c;
    
    c = getchar();
    while(c != EOF){
        putchar(c);
        c = getchar();
    }
}
 */

/* 2nd version*/
main()
{
    int c;
    while ((c = getchar()) != EOF) {
        putchar(c);
    }
}
