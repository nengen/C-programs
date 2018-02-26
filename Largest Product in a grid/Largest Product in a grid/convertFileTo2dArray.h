//
//  convertFileTo2dArray.h
//  stringToNumArr
//
//  Created by Nils-erik Engen on 26.02.2018.
//

#ifndef convertFileTo2dArray_h
#define convertFileTo2dArray_h


/*This function takes a filename of a file in, then it converts the string in the file to an multi dimensional array of ints
 This is perfect for when you need to take in a grid and do computations on it.
 I used it for project euler problem 11. Look at main in the c file to see how it works.
 */

#include <stdio.h>
#define horizontalMax 21
#define verticalMax 21

struct mArray{
    int a[verticalMax][horizontalMax];
};

/*To run just assign a struct of type mArray to the function below, and it will give you the 2d array of ints back*/

struct mArray convertFileTo2DArray(const char *filename);

#endif /* convertFileTo2dArray_h */
