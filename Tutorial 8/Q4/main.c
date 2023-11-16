#include <stdio.h>

int main()
{
    int p,q;

    for(p=0;p<=5;p++)
    {
        for(q=0;q<=p;q++)
        {
            printf("%d",q);
        }
            printf("\n");

    }
    for(p=4;p>=0;p--)
    {
        for(q=0;q<=p;q++)
        {
            printf("%d",q);
        }
            printf("\n");

    }
}

