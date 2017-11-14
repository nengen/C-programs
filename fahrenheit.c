//
//  fahrenheit.c
//  
//
//  Created by Nils-erik Engen on 08.09.2017.
//
//

#include "fahrenheit.h"
#include <stdio.h>

#define LOWER 0 //lower limit
#define UPPER 300 //upper limit
#define STEP 20 //step size

/*Print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300*/
main()
{
    int fahr;
    for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
