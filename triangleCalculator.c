//
//  triangleCalculator.c
//  
//
//  Created by Nils-erik Engen on 14.09.2017.
//
//

#include "triangleCalculator.h"
#include <stdio.h>
#include <math.h>

int a;
int b;

double calcArea(void);
double calcCircumference(void);
double calcMissingSide(void);

main()
{
     extern int a, b;
    double area, circumference, missingSide;
    
    printf("Enter the value of the two shortest sides in the triangle: \n");
    scanf("%d %d", &a, &b);
    
    printf("%d, %d \n", a, b);
    area = calcArea();
    circumference = calcCircumference();
    missingSide = calcMissingSide();
    
    printf("The are of your triangle is %lf and the circumference is %lf and the missing side is %lf \n ", area, circumference, missingSide);
}



double calcArea(void)
{
    
    extern int a, b;
    
    double area;
    area = (a * b)/2;
    
    return area;
    
    
}

double calcCircumference(void){
    
    extern int a,b;
    
    double missingSide, circumference;
    
    missingSide = calcMissingSide();
    
    circumference = (a + b + missingSide);
    return circumference;
}

double calcMissingSide(void){
    
    extern int a,b;
    
    double missingSide = (a*a) + (b*b);
    missingSide = sqrt(missingSide);
    
    return missingSide;
    
}



