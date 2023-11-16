#include <stdio.h>

int main()
{
    int y,x;
    for(y=0;y<=9;y++)
    {
        for(x=10-y;x>=1;x--)
            printf("*");
        printf("\n");
    }
}
