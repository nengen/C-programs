//
//  convertFileTo2dArray.c
//  stringToNumArr
//
//  Created by Nils-erik Engen on 26.02.2018.

//

#include "convertFileTo2dArray.h"
#include <stdio.h>
#define horizontalMax 21
#define verticalMax 21



struct mArray convertFileTo2DArray(const char *filename);

int main(int argc, const char * argv[]) {
    
    
    const char *filename = "grid.txt";
    
    struct mArray grid = convertFileTo2DArray(filename);
    for (int j = 0; j <20; j++) {
        printf("\n");
        for (int i = 0; i<20; i++)
            printf("%d,", grid.a[j][i]);
    }
    
    
    
    
    
    
    
    
    return 0;
}

struct mArray convertFileTo2DArray(const char *filename){
    
    
    
    //opens file
    char buf[100];
    int v = 0;
    struct mArray array;
    int i,j;
    FILE *fp;
    fp = fopen(filename, "r");
    if (fp == NULL) // problem opening the file
        exit(1);
        
        while ((fgets(buf, 100, fp) != NULL)) {
            
            //replace space with comma
            for (int i = 0; i < 100; i++) {
                if(buf[i] == ' '){
                    buf[i] = ',';
                }
            }
            
            
            for (( i = 0, j = 0); i < 100; i++, j++) {
                int temp = 0;
                int pw = 0;
                while ((buf[i] > 47) && (buf[i] < 58) && buf[i] != ',') {
                    (pw == 0) ? (pw = 10) : (pw = 1);
                    temp += ((buf[i]-'0'));
                    temp *= pw;
                    pw++;
                    i++;
                }
                array.a[v][j] = temp;
                
            }
            v++;
        }
    
    
    //closes file
    fclose(fp);
    return array;
    
    
}
