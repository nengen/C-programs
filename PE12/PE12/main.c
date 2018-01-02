//
//  main.c
//  PE12
//
//  Created by Nils-erik Engen on 22.12.2017.
//  Copyright © 2017 NorseTechnology. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int triangleNumb(int n);
double numbOfDivisors(double n);

int main(int argc, const char * argv[]) {

    int triangleNumber = 0;
    int numbToFind = 500;
    
    
    for (int i = 1; ; i++) {
        triangleNumber += i;
        if (numbOfDivisors(triangleNumber) >= numbToFind) {
            break;
        }
    }
 
    printf("%d\n", triangleNumber);
    printf("%f\n", numbOfDivisors(triangleNumber));
    
    
    
    return 0;
}



double numbOfDivisors(double n){
    int limit = (sqrt(n));
    int i;
    int numb = 0;
    
    for (i = 1; i <= limit; i++) {
        if ( ((int)n % i) == 0) {
            numb += 2;
        }
        if (limit * limit == n) {
            numb--;
        }
    }
    return numb;
}
