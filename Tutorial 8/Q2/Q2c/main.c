#include <stdio.h>

int main()
{
    int x,y,z,n;
    for(y=1;y<=10;y++)
    {
        n=0;
        for(x=1;x<y;x++)
        {
            printf(" ");
            n++;
        }
        for(z=n;z<=9;z++)
            printf("*");
        printf("\n");
    }
}
