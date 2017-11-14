//
//  strlen.c
//  
//
//  Created by Nils-erik Engen on 18.09.2017.
//
//

#include "strlen.h"

int strlen(char *s){

    int n;
    
    for(n = 0; *s != '\0'; s++){
        n++;
    }
    return n;
    
}
