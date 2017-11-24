//
//  main.c
//  PE9
//
//  Created by Nils-erik Engen on 24.11.2017.
//  Copyright © 2017 NorseTechnology. All rights reserved.
//

#include <stdio.h>
#include <math.h>

#define ENDSUM 1000

int main(int argc, const char * argv[]) {
    
    double i,j,c;
    j = 3;
    double sum = 0;
    double product;
    for (i = 4; sum != ENDSUM; i++) {
        c = sqrt(pow(i, 2.0) + pow(j, 2.0));
        sum = i + j + c;
        
        if (sum > 1000) {
            j++;
            i = j +1;
        }
        
    }
    i--;
    product = i*j*c;
    
    
    printf("The pythagorean triplet which is 1000 is: a = %0.0f , b = %0.0f, c= %0.0f\n", i,j,c);
    printf("The product is: %0.0f\n", product);
    
    
    
    return 0;
}
