//
//  LabelTable.h
//  Assembler
//
//  Created by Nils-erik Engen on 29.01.2018.
//

#ifndef LabelTable_h
#define LabelTable_h

#include <stdio.h>

typedef struct{
    char *label;
    int address;
}LabelEntry;

typedef struct {
    int capacity;
    int nbrEntries;
    LabelEntry * entries;
    
}LabelTable;

int tableResize(LabelTable *table, int newSize);
int findLabel(LabelTable *table, char* label);
int tableInit(LabelTable *table);
int addLabel(LabelTable *table, char *label, int PC);
void printLabel(LabelTable *table);

#endif /* LabelTable_h */
