//
//  pass1.c
//  Assembler
//
//  Created by Nils-erik Engen on 29.01.2018.
//

#include "pass1.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "LabelTable.h"
#include "getToken.h"

//Returns a copy of the label table that was constructed
LabelTable pass1(char *filename){

    LabelTable table;              /* the table of labels & addresses */
    FILE * fp;                     /* file pointer */
    char * tokBegin, * tokEnd;     /* used to step thru inst */
    int    PC = 0;                 /* the program counter */
    char   inst[BUFSIZ];           /* will hold instruction; BUFSIZ
                                    is max size of I/O buffer */
    const char * ERROR1 = "Error: Cannot open file %s.\n";
    
    tableInit(&table);
    if((tableResize(&table, 10)) == 0){
        //Error already printed
        return table;
    }
    
    if((fopen(filename, "r")) == NULL){
        (void) fprintf(stderr, ERROR1, filename);
        return table;
    }
    
    for (PC = 0; fgets(inst, BUFSIZ, fp); PC += 4) {
        
        if(*inst == '#')
            continue;
        (void) strtok(inst, "#");
        
        //Skip leading whitespace, inst does this for us
        tokBegin = inst;
        getToken(&tokBegin, &tokEnd);
        
        if(*tokEnd == ':'){
            //line has a label
            *tokEnd = '\0';
            //add label to table
            if((addLabel(&table, tokBegin, PC)) == 0){
                fclose(fp);
                return table;
            }
                
        }
        
        tokBegin = tokEnd+1;
        getToken(&tokBegin, &tokEnd);
        *tokEnd = '\0';
    }
    //EOF
    fclose(fp);
    return table;
    
    
}
