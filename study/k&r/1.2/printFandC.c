//
//  printeFandC.c
//  study
//
//  Created by Andrew Balint on 4/12/21.
//
#include <stdio.h>
#include "printFandC.h"
void printFandC()
{
    printf("Fahrenheit Celsius Conversion Chart\n");
    printf("F\tC\n");
    float F,C;
    int min = 0;
    int max = 300;
    float step = 20.0;
    F = min;
    while(F <= max)
    {
        C = 5 * (F-32) /9;
        printf("%3.0f %6.2f\n",F,C);
        F += step;
    }
}
