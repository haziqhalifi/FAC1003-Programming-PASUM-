#include <stdio.h>
float ave(float,float,float,float);
float sd(float,float,float,float);

int main()
{
    float a,b,c,d,av,s;
    int input,Y;
    start:
    printf("Press 1 to enter the program or press any button to exit: ");
    scanf("%d",&input);
    if (input==1)
    {
        printf("Enter 4 numbers, I will give you the mean and standard deviation of the data\n");
        scanf("%f",&a);
        scanf("%f",&b);
        scanf("%f",&c);
        scanf("%f",&d);


        printf("Mean of %.2f, %.2f, %.2f and %.2f is %.2f\nThe standard deviation of these numbers is %f",a,b,c,d,ave(a,b,c,d),sd(a,b,c,d));
        printf("\n");
        goto start;
    }
    else
    printf("You wished to exit. Thank you");

    return 0;
}
/********subprogram average***************/
float ave(float a,float b,float c,float d)
{
    float av;
    av=(a+b+c+d)/4.0;
}
/********subprogram standard deviation***************/
float sd(float a,float b,float c,float d)
{
    float s,av,e1,ad;
    av=(a+b+c+d)/4.0;
    e1=(pow(a-2.5,2.0)+pow(b-2.5,2.0)+pow(c-2.5,2.0)+pow(d-2.5,2.0))/3.0;
    s=sqrt(e1);
}
