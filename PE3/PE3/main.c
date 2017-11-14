//
//  main.c
//  PE3
//
//  Created by Nils-erik Engen on 11.11.2017.
//  Copyright © 2017 NorseTechnology. All rights reserved.
//

#include <stdio.h>

#define MAXVAL 600851475143

int main(int argc, const char * argv[]) {
    
    long long highestPrimeNumber,i;
    highestPrimeNumber = 0;
    long long numberToCheck = MAXVAL;
    
    for (i = 1; numberToCheck > 1; i++) {
        if(numberToCheck % i == 0){
            highestPrimeNumber = i;
            numberToCheck = numberToCheck / i;
        }
    }
    
    printf("The highest prime factor is %lld\n", highestPrimeNumber);
    
    
    
    return 0;
}
