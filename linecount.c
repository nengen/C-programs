//
//  linecount.c
//  
//
//  Created by Nils-erik Engen on 08.09.2017.
//
//

#include "linecount.h"
#include <stdio.h>

main()
{
    int c, nl;
    
    nl = 0;
    while ((c = getchar()) != EOF) {
        if(c == '\n')
            ++nl;
        printf("%d\n", nl);
    }
}
