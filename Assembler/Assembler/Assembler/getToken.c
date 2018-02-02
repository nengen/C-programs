//
//  getToken.c
//  Assembler
//
//  Created by Nils-erik Engen on 29.01.2018.

//

#include "getToken.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//sets two char pointers, one to the begging of a token, and the other one to the first char beyond the token

void getToken(char **tokBegin, char **tokEnd){
    //Check if we have a string to step through
    if(tokBegin == NULL || *tokBegin == NULL)
        return;
    
    //Skip leading whitespace
    if (**tokBegin != '\0' && isspace(**tokBegin)) {
        (*tokBegin)++;
    }
    if(**tokBegin == '\0'){
        *tokBegin = *tokEnd;
        return;
    }
    
    //find the end of the first token
    *tokEnd = *tokBegin+1;
    while (**tokEnd != '\0' && **tokEnd != ',' && **tokEnd != '(' && **tokEnd != ')' && **tokEnd != ':') {
        (*tokEnd)++;
    }
    //tokBegin points to first char of token and tokEnd points to first char after the token
    
}
