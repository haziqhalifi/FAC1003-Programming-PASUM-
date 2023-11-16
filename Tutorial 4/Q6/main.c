#include <stdio.h>

int main()
{
int num1,num2,num3,sum;
printf("Enter three number:\n");
scanf("\n%d",&num1);
scanf("\n%d",&num2);
scanf("\n%d",&num3);
if (num1<num2&&num2<num3)
    printf("%d<%d<%d",num1,num2,num3);
else if (num1>num2&&num2>num3)
    printf("%d<%d<%d",num3,num2,num1);
else if (num3>num1&&num2<num1)
    printf("%d<%d<%d",num2,num1,num3);
else if (num1>num2&&num2<num3)
    printf("%d<%d<%d",num2,num3,num1);
else if ((num2>num1)&&(num1>num3))
    printf("%d<%d<%d",num3,num1,num2);
else if (num2>num1&&num1<num3)
    printf("%d>%d>%d",num1,num3,num2);

else
    printf("Try enter different number");
sum=num1+num2+num3;
printf("\nSum of all digits is %d",sum);
}
