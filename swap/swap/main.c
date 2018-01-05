//
//  main.c
//  swap
//
//  Created by Nils-erik Engen on 05.01.2018.
//  Copyright © 2018 NorseTechnology. All rights reserved.
//

#include <stdio.h>

//Swaps two variables through the use of pointers or third/no third variable;

void swapWithThird(int a, int b);
void swapWithoutThird(int a, int b);

int main(int argc, const char * argv[]) {
    
  
    
    swapWithThird(4, 5);
    swapWithoutThird(4, 5);
 
}


void swapWithThird(int a, int b){
    
    int temp;
    
    printf("The variable a is: %d, and the variable b is: %d\n", a,b);
    
    temp = a;
    a = b;
    b = temp;
    
    printf("The variable a is now: %d, and the variable b is: %d\n", a ,b);
}


void swapWithoutThird(int a, int b){
    printf("The variable a is: %d, and the variable b is: %d\n", a,b);
    
    a = a - b;
    b = b + a;
    a = b - a;
    
    printf("The variable a is now: %d, and the variable b is: %d\n", a ,b);
}

