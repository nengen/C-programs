//
//  main.c
//  factorial
//
//  Created by Nils-erik Engen on 05.01.2018.
//  Copyright © 2018 NorseTechnology. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
   
    int factorial;
    int numb;
    
    printf("Enter the number: ");
    scanf("%d", &numb);
    
    factorial = numb;
    
    int i;
    for (i = 1; i < numb; i++) {
        factorial = factorial * i;
    }
    printf("The factorial of %d is %d\n", numb, factorial);
    
    return 0;
}
