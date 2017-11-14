//
//  strcmp.c
//  
//
//  Created by Nils-erik Engen on 18.09.2017.
//
//

#include "strcmp.h"
//strcmp: return <+ if s<t, 0 if s==t, >0 if s>t
int strcmp(char *s, char *t)
{
    int i;
    
    for(i = 0; s[i] == t[i]; i++){
        if(s[i] == '\0'){
            return 0;
        }
    }
    return s[i] - t[i]
}


//pointer version
int strcmp(char *s, char *t){
    for( ; *s == *t; s++, t++){
        if(*s == '\0'){
            return 0;
        }
    }
    return *s - *t;
}
