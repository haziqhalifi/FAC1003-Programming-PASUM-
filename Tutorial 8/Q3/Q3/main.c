#include <stdio.h>

int main()
{
    int y,x,n;
    printf("Enter a number between 1 and 9: ");
    scanf("%d",&n);
    while(n<1||n>9)
        {
            printf("Invalid number.Enter a number between 1 and 9: ");
            scanf("%d",&n);
        }
    for(y=1;y<=n;y++)
    {
        for(x=1;x<=y;x++)
        printf("%d",x);
    printf("\n");
    }

}
