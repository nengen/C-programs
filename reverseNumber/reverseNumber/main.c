//
//  main.c
//  reverseNumber
//
//  Created by Nils-erik Engen on 05.01.2018.
//  Copyright © 2018 NorseTechnology. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, const char * argv[]) {
    
    int c,i,j;
    char *p;
    long numb;
    i = 0;
    printf("Enter a number: ");
    scanf("%d", &c);
    
    char string[100];
    char newString[100];
    sprintf(string, "%d", c);
    
    for ( j = 100; i != strlen(string);j--) {
        if(isdigit(string[j])){
            newString[i] = string[j];
            i++;
        }
    }
    
    numb = strtol(newString, &p, 10);
    printf("The integer reversed is: %ld", numb);
    
    return 0;
}
