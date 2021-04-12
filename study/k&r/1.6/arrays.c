//
//  arrays.c
//  study
//
//  Created by Andrew Balint on 4/12/21.
//

#include "arrays.h"
void countInputs()
{
    int c, i, nwhite, nother;
    int ndigit[10];
    
    nwhite = nother = 0;
    for(i = 0; i < 10; ++i)
        ndigit[i] = 0; // setting every index to 0
    
    while((c = getchar()) != EOF)
    {
        if (c >= '0' && c<= '9')
            ++ndigit[c-'0'];
        else if(c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;
    }
        
        printf("digits =");
        for(i = 0; i < 10; ++i)
        printf(" %d", ndigit[i]);
        printf(", white space = %d, other = %d\n", nwhite, nother);
    
    
}

//prints a vertical histogram counting frequency of word length
//exercise 1-13
void wordHistogram()
{
    int c, length;
    c = length = 0;
    int lengthCountArray [12];
    for(int i = 0; i < 12; i++)
        lengthCountArray[i] = 0;
    while((c = getchar()) != EOF)
    {
        if(c == ' ' || c == '\n' || c == '\t')
        {
            if(length != 0)
                lengthCountArray[length]++;
            length = 0;
        }
        else
            length++;
    }//end while
    printf("\n");
    int maxCount = 0;
    int wordLength = 0;
    for(int i = 0; i < 12; i++){
        printf("%d\t",lengthCountArray[i]);
        if(maxCount < lengthCountArray[i]){
            maxCount = lengthCountArray[i];
            wordLength = i;
        }
    }
    printf("\n");
    for(int i = 0; i < 12; i++)
        printf("%d\t",i);
    
    printf("\nthe most frequent word length is %d with %d words\n\n",wordLength, maxCount);
    
    
    for(int i = maxCount; i > 0; i--)
    {
        printf("%d\t",i);
        for(int ii = 0; ii < 12; ii++)
        {
            if(lengthCountArray[ii]>=i)
                printf("|\t");
            else
                printf("\t");
        }
        printf("\n");
    }
    printf("\t");
    for(int i = 0; i < 12; i++)
        printf("%d\t",i);
    printf("\n");
    
}
