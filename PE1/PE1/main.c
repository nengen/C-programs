//
//  main.c
//  PE1
//
//  Created by Nils-erik Engen on 11.11.2017.
//  Copyright © 2017 NorseTechnology. All rights reserved.
//

#include <stdio.h>

#define LIMIT 1000
#define three 3
#define five 5

int main(int argc, const char * argv[]) {
    int sum,i;
    for (i=0; i < LIMIT; i++) {
        if ( (i % three == 0) || (i % five == 0) ) {
            sum += i;
        }
    }
    printf("The sum is : %d\n", sum);
    
    return 0;
}
