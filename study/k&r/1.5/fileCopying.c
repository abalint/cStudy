//
//  fileCopying.c
//  study
//
//  Created by Andrew Balint on 4/12/21.
//

#include "fileCopying.h"
#define IN 1
#define OUT 0

void copyFile()
{
    int character; //use int data type instead of char because char is not large enough to hold an end of file character, but int is.
    //character = getchar(); can get the char inside of the while loop
    while((character = getchar())!= EOF)//EOF = End of File the value is defined in stdio.h
    {
        printf("eval = %1i\n", character != EOF);
        putchar(character);
        printf("\n");
        
    }
    printf("eval = %1i\n", character != EOF);
    printf("EOF character is: %1i\n",character);
    return;
}//end copy file


void countCharacters()
{
    
    /* long nc;
     nc = 0;
     while(getchar() != EOF)
     ++nc;
     printf("nc count: %ld\n",nc);
     */
    double nc;
    
    for(nc = 0; getchar() != EOF; ++nc)
    ;
    printf("Character count is: %.0f\n",nc);
}//end count characters


void countLines()
{
    int c,nl;
    nl = 0;
    while((c = getchar())!= EOF)
        if(c == '\n')
            ++nl;
    printf("newLine count is: %d\n",nl);
}

void countWords()
{
    int c, nl, nw, nc, state;
    state = OUT;
    nl = nw = nc = 0;
    while((c = getchar()) != EOF)
    {
        ++nc;
        if(c == '\n')
            ++nl;
        if(c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if(state == OUT)
        {
            state = IN;
            ++nw;
        }//end else if
    }//end while
    
    printf("word count: %d\n",nw);
    printf("line count: %d\n",nl);
    printf("character count: %d\n",nc);
}


void printWords()
{
    int c;
    while((c = getchar()) != EOF)
    {
        if(c == '\n' || c == '\t' || c == ' ')
            printf("\n");
        else
            putchar(c);
    }
}
