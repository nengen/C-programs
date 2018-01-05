//
//  main.c
//  sumOfNNumbers
//
//  Created by Nils-erik Engen on 05.01.2018.
//  Copyright © 2018 NorseTechnology. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int numb,i,sum,n;
    
    printf("Enter the number of ints you want to add: ");
    
    scanf("%d", &numb);
    
    printf("Enter the %d numbers you want to add:\n", numb);
    
    for (i = 0, sum = 0; i != numb; i++) {
        scanf("%d", &n);
        sum = sum + n;
    }
    
    printf("The sum of the integers is: %d\n", sum);
    
    
    
    return 0;
}
