//
//  main.c
//  PE4
//
//  Created by Nils-erik Engen on 11.11.2017.
//  Copyright © 2017 NorseTechnology. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    clock_t begin = clock();
    int foundNumb = 0;
    int highestPalindrome = 0;
    int dig1 = 999;
    int dig2 = 999;
    char buffer[10000];
    int i, j;
    char forward[10000], backwards[10000], correct[10000];
    
    while (dig2 != 1 && dig1 > 0) {
        snprintf(buffer, 10000, "%d", (dig1*dig2));
        for (i = 0, (j = strlen(buffer)-1) ; i < 6; i++, j--) {
            if(buffer[i] == '\0'){
                forward[i] = '\0';
                backwards[i] = '\0';
            }else{
                forward[i] = buffer[i];
                backwards[i] = buffer[j];
            }
        }
        
        for (i = 0; i < (strlen(buffer)); i++) {
            if (forward[i] != backwards[i]) {
                dig1--;
                if (dig1 == 1) {
                    dig2--;
                    dig1 = 999;
                }
                break;
            }else{
                if (i == strlen(buffer)-1){
                    foundNumb = 1;
                    if(dig1*dig2 > highestPalindrome)
                        highestPalindrome = dig2*dig1;
                    if (dig1 == 1) {
                        dig2--;
                        dig1 = 999;
                    }else{
                        dig1--;
                    }
                }
            }
        }
        
    }
    
    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    
    
    int firstNumber = dig1* dig2;
    printf("The palindrome is %d\n", (highestPalindrome));
    printf("Found in %f\n", time_spent);
    
    return 0;
}


