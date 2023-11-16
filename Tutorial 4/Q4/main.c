//Write a C program that reads an integer and determines and prints whether it is odd or even by using the selection structure if..else.
#include <stdio.h>

int main()
{
    int a;

    printf("Enter an integer : ");
    scanf("%d",&a);
    if (a%2==0)
        printf("%d is an even integer",a);
    else
        printf("%d is an odd integer",a);

}
