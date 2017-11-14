//
//  main.c
//  PE7
//
//  Created by Nils-erik Engen on 14.11.2017.
//  Copyright © 2017 NorseTechnology. All rights reserved.
//

#include <stdio.h>

int isPrime(int n);

int main(int argc, const char * argv[]) {
    
    int prime;
    int primeNumber;
    int i;
    for (i = 2; prime != 10001; i++) {
        if (isPrime(i) == 1) {
            prime++;
        }
        if (prime == 10001) {
            primeNumber = i;
        }
    }
    
    printf("The 10001 prime number is: %d \n", primeNumber);
    
    
    return 0;
}

int isPrime(int n){
    int i;
    for (i = 2; i < n; i++) {
        if(n % i == 0 && i != n)
            return 0;
    }
    return 1;
}
