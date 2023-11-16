#include <stdio.h>

int main()
{
    int n,total=0;
    printf("Please insert a number : ");
    scanf("%d",&n);
    for(total=0;n>0;n--)
    {
        total=total+pow(n,3);
    }
    printf("The total is %d.",total);
}
