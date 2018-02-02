

//
//  binToDec.c
//  Assembler
//
//  Created by Nils-erik Engen on 29.01.2018.
//  Copyright © 2018 NorseTechnology. All rights reserved.
//

#include "binToDec.h"

// function binToDec takes a binary expression and converts it to a decimal number.

int binDec(char string[], int begin, int end){
    char one = '1';
    int decimal = 0;
    int i;
    
    //Loops through the array
    for (i = begin; i < end; i++) {
        decimal = 2 * decimal + ((string[i] == one)? 1 : 0);
    }
    return decimal;
}
