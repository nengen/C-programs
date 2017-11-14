//
//  countch.c
//  
//
//  Created by Nils-erik Engen on 08.09.2017.
//
//

#include "countch.h"
#include <stdio.h>

//counts characters in input

/*version 1
main()
{
    long nc;
    
    nc = 0;
    while (getchar() != EOF) {
        ++nc;
        printf("%ld\n", nc);
    }
}
*/

//version 2
main()
{
    double nc;
    
    for(nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%.0f\n", nc);
}
