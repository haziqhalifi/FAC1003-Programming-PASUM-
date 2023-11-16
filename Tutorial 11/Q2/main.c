#include<stdio.h>
double ans(double,double);

int main()
{
    double val,x,a;
    start:
    printf("Insert a value for x between -1 to 1: ");
    scanf("%lf",&x);
    printf("Insert a value for k: ");
    scanf("%lf",&a);

    if (x<=-1||x>=1)
        goto start;

    val=ans(x,a);
    printf("The answer is %lf",val);

}
double ans(double x,double a)
{
    double val;

    if(a==0)
        return 1;
    else
        return pow(x,a)+ans(x,a-1);

}
