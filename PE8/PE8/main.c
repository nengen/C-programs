//
//  main.c
//  PE8
//
//  Created by Nils-erik Engen on 14.11.2017.
//  Copyright © 2017 NorseTechnology. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define NUMBEROFDIGITS 13

//Make a function that takes the bigdigit an breaks each digit into a place in an array so we can use array indices
//compute function doesnt work like intended, it seems to not be able to access each number

char array[1000000] = {"731671765313306249192251196744265747423553491949349698352031277450632623957831801698480186947885184396983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450"};

float computeAdjacentNumbers(char s[4]);
//char *makeArray(char s[]);


int main(int argc, const char * argv[]) {

    char s[NUMBEROFDIGITS];
    int m,n,j;
    float highest = 0;
    float currentVal;
    
    for (m = 0; m < strlen(array); m++) {
        for (n = 0, j = m; n < NUMBEROFDIGITS; n++ ,j++) {
            s[n] = array[j];
        }
        currentVal = computeAdjacentNumbers(s);
        if (highest < currentVal) {
            highest = currentVal;
        }
        
    }
   
    printf("Highest value is %0.0f\n", highest);
    
    return 0;
}
/*
char *makeArray(char s[4]){
    int j = 0;
    int i;
    for (i = 0; i < strlen(s); i++) {
        
    }
}
*/
 
float computeAdjacentNumbers(char s[NUMBEROFDIGITS]){
    int i;
    float product = 1;
    char temp;
    
    for (i = 0; i < NUMBEROFDIGITS; i++) {
        temp = s[i];
        product *= (s[i] - '0');
    }
    return product;
}


