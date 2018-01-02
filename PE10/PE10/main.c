//
//  main.c
//  PE10
//
//  Created by Nils-erik Engen on 24.11.2017.
//  Copyright © 2017 NorseTechnology. All rights reserved.
//

#include <stdio.h>
#define LIMIT 2000000

int checkPrime(int num);
int main(int argc, const char * argv[]) {
    int i;
    long sum = 0;
    for (i = 2; i < LIMIT; i++) {
        if (checkPrime(i) == 1) {
            sum += i;
        }
    }
    
    
    printf("The sum of the primes below two million is: %0.0ld \n", sum);
    
    return 0;
}

int checkPrime(int n){
    int range = n;
    for (int i = 2; i < range; i++){
        if (n%i == 0){
            return 0;
        }
        range = n / i;
    }
    return 1;
}
