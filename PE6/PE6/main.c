//
//  main.c
//  PE6
//
//  Created by Nils-erik Engen on 14.11.2017.
//  Copyright © 2017 NorseTechnology. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int sumOfSquares(int limitToCheck);
int squareOfSum(int number);

int main(int argc, const char * argv[]) {
    
    int number = 100;
    int squareofsum = squareOfSum(number);
    int sumofsquare = sumOfSquares(number);
    
    printf("The sum of squares for the first 100 natural numbers is : %d \n", sumofsquare);
    printf("The square of the sum for the first 100 natural numbers is: %d \n", squareofsum);
    printf("The difference is: %d\n",(squareofsum - sumofsquare));
    
    return 0;
}

//pass the number you want to check until
int sumOfSquares(int number){
    
    int i;
    int sumOfSquares = 0;
    for (i = 1; i <= number; i++) {
        sumOfSquares += pow((double)i, 2.0);
    }
    return sumOfSquares;
    
}

int squareOfSum(int number){
    int i;
    int squareOfSum = 0;
    int sum = 0;
    for (i = 1; i <= number; i++) {
        sum += i;
    }
    return squareOfSum = pow((double) sum, 2.0);
}
