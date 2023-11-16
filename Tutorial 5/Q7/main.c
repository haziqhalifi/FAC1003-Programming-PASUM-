#include <stdio.h>

int main()
{
    int n=2,sum=0;
    condition:
    if (n<=100){
    printf("Number is %d\n",n);
    sum=sum+n;
    n+=2;
    printf("Sum of even number is %d\n\n",sum);
    goto condition;
    }
}
