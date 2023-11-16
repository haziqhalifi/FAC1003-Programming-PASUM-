#include <stdio.h>
#include <stdlib.h>

int main()
{
    char col;
    printf("R/r for Red\nB/b for Blue\nG/g for Grey\nW/w for White\nEnter the colour of the gas\n");
    scanf("%c",&col);
    switch(col){
case 'R':
case 'r': printf("The colour of the gas is red. The gas is ammonia");
          break;
case 'B':
case 'b': printf("The colour of the gas is blue. The gas is carbon monoxide");
          break;
case 'G':
case 'g': printf("The colour of the gas is grey. The gas is hydrogen");
          break;
case 'W':
case 'w': printf("The colour of the gas is white. The gas is oxygen");
          break;
default: printf("Contents unknown");
}
}
