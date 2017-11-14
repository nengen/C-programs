//
//  main.c
//  PE5
//
//  Created by Nils-erik Engen on 14.11.2017.
//  Copyright © 2017 NorseTechnology. All rights reserved.
//

#include <stdio.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    clock_t begin = clock();
    int found = 0;
    int commonDivisor;
    int i,j;
    for (i = 1; found == 0; i++) {
        for (j = 11; j <21; j++) {
            if(i%j == 0){
                if(j == 20){
                    found = 1;
                    commonDivisor = i;
                }
            }else{
                break;
            }
        }
    }
    
    
    printf("The smallest common divisor is: %d \n", commonDivisor);
    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Found in %f\n", time_spent);
    
    return 0;
}
