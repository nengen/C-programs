//
//  tester.c
//  Assembler
//
//  Created by Nils-erik Engen on 02.02.2018.

//

#include <stdio.h>
#include <string.h>
#include "LabelTable.h"

LabelTable pass1 (char * filename);
LabelTable pass2 (char * filename, LabelTable table);


int main ()
{
    LabelTable table;
    int i;
    table = pass1 ("testfile.txt");
    (void)pass2("testfile.txt", table);
    //printLabels (&table);
    
    return 0;
}
