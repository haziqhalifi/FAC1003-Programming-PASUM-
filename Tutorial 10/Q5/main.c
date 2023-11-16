#include <stdio.h>
void num(int);
int main()
{
    int n=1;
    printf("The natural number are : ");
    num(n);
    return 0;
}
void num (int n)
{
    if(n<=50)
    {
        printf("%d ",n);
        num(n+1);
    }
}
