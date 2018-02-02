//
//  LabelTable.c
//  Assembler
//
//  Created by Nils-erik Engen on 29.01.2018.

//
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "LabelTable.h"

static const char * ERROR1 = "Could not allocate space in memory";
static const char * ERROR2 = "A duplicate label was found";

int findLabel(LabelTable *table, char* label);

int tableInit(LabelTable *table){
    //Initialize a Table
    table->capacity = 0;
    table->entries = 0;
    table->nbrEntries = 0;
    return 0;
}

int tableResize(LabelTable *table, int newSize){
    
    char *ptr;
    LabelEntry *newEntryList;
    int smaller;
    
    if (table == NULL) {
        return 0;
    }
    
    if((newEntryList = malloc(newSize * sizeof(LabelEntry))) == NULL){
        
        (void) fprintf(stderr, "%s", ERROR1);
        return 0;
    }
    if(table->entries){
        smaller = table->nbrEntries > newSize ? table->nbrEntries : newSize;
        memcpy(newEntryList, table->entries, smaller);
        
        free(table->entries);
        table->nbrEntries = smaller;
    }
    
    table->capacity = newSize;
    table->entries = newEntryList;
    return 1;
    
}

int addLabel(LabelTable *table, char *label, int PC){
    char *duplicateLabel;
    if(table == NULL)
        return 0;
    
    //Dynamically allocated version of label
    if((duplicateLabel = strdup(label)) == NULL){
        (void) fprintf(stderr, "%s", ERROR1);
    }
    
    //Check if it's in the table
    if((findLabel(table,label)) == -1){
        if(table->nbrEntries >= table->capacity){
            tableResize(table, table->capacity+1);
        }
        LabelEntry* newEntry = table->entries + table->nbrEntries;
        newEntry->label = duplicateLabel;
        newEntry->address = PC;
        ++table->nbrEntries;
    }else{
        (void) fprintf(stdout, "The label already exists\n");
    }
    return 1;
}

int findLabel(LabelTable *table, char *label){
    
    int i;
    LabelEntry *newEntry = table->entries;
    for (i = 0; i < table->nbrEntries; i++) {
        if (strcmp(newEntry->label, label) == 0) {
            return newEntry->address;
        }
        newEntry++;
    }
    return -1;
}

void printLabel(LabelTable *table){
    LabelEntry *newEntry = table->entries;
    if (newEntry == NULL) {
        (void) printf("The Label Table is a null pointer\n");
    }else{
        (void) printf("There are %d labels in the table\n", table->nbrEntries);
        for (int i = 0; i < table->nbrEntries; i++) {
            (void) printf("Label value: %s, Label address: %d\n", newEntry->label, newEntry->address);
        }
    }
}











