#include <stdio.h>

int main()
{
    int x,y;
    for(y=1;y<=10;y++)
    {
        for(x=1;x<=y;x++)
            printf("*");
        printf("\n");
    }
}
