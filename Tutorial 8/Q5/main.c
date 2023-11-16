#include <stdio.h>

int main()
{
    int y,x;
    for(y=1;y<=6;y++)
    {
        for(x=1;x<=6;x++)
        {
            if((x+y)%2==0)
                printf("0 ");
            else
                printf("1 ");
        }
    printf("\n");

    }
}
