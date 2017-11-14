//
//  main.c
//  PE2
//
//  Created by Nils-erik Engen on 11.11.2017.
//  Copyright © 2017 NorseTechnology. All rights reserved.
//

#include <stdio.h>


#define MAXVAL 4000000



int main(int argc, const char * argv[]) {
    
    int fib,last,secondlast, sumIsEven;
    fib = 0;
    last = 1;
    secondlast = 0;
    sumIsEven = 0;
    
    while (fib < MAXVAL) {
        fib = secondlast + last;
        secondlast = last;
        last = fib;
        if(fib % 2 == 0 && fib < MAXVAL)
            sumIsEven += fib;
    }
    
    printf("The sum is %d\n", sumIsEven);
    
    
    
    return 0;
}


