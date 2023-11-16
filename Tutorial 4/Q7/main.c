#include <stdio.h>

int main()
{
int A,B,X;
printf("Enter value 'A': ");
scanf("%d",&A);
printf("Enter value 'B': ");
scanf("%d",&B);
if (A<B)
{
    if (A<10)
        X=A+B;
    else
        X=B-A;
}
else if (B<5)
    X=A*B;
else if(A<15)
    X=pow(A,2);
else
    X=pow(B,2);
printf("%d",X);
}
