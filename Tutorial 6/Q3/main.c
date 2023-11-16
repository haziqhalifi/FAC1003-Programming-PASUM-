#include <stdio.h>

int main()
{
    int x;
    printf("Please insert a number : ");
    scanf("%d",&x);
    while (x%2!=0)
    {
        printf("odd");
        printf("\nPlease insert a number : ");
        scanf("%d",&x);
    }
}
