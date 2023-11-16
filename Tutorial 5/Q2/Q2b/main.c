#include <stdio.h>
#include <stdlib.h>

int main()
{
    char col;
    printf("R/r for Red\nB/b for Blue\nG/g for Grey\nW/w for White\nEnter the colour of the gas\n");
    scanf("%c",&col);
    if(col=='R'||col=='r')
        printf("The colour of the gas is red. The gas is ammonia");
    else if (col=='B'||col=='b')
        printf("The colour of the gas is blue. The gas is carbon monoxide");
    else if (col=='G'||col=='g')
        printf("The colour of the gas is grey. The gas is hydrogen");
    else if (col=='W'||col=='w')
        printf("The colour of the gas is white. The gas is oxygen");
    else
        printf("Content unknown");





}
