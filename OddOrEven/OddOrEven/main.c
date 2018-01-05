//
//  main.c
//  OddOrEven
//
//  Created by Nils-erik Engen on 05.01.2018.
//  Copyright © 2018 NorseTechnology. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    int c;
    
    printf("Enter a number: ");
    scanf("%d", &c);
    
    if (c % 2 == 0) {
        printf("\nThe number is even\n");
    }else{
        printf("\nThe number is odd\n");
    }
    
    return 0;
}
