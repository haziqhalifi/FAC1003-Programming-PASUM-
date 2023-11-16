#include <stdio.h>

int main()
{
    int input,n,total=0;
    float tan1,tan2,x,u,sum1=0,sum2=0;
    printf("1: Inverse of Tangent function\t2:Inverse of Hyperbolic Tangent function\nChoose your function: ");
    scanf("%d",&input);

    printf("Please insert an angle in radian (between -1.00 to 1.00): ");
    scanf("%f",&u);
    while (u<-1.00||u>1.00)
    {
        printf("Invalid angle.Please insert an angle in radian (between -1.00 to 1.00): ");
        scanf("%f",&u);
    }

    printf("n\tvalue\n");

    if (input==1){
        for(n=0;n<=30;n++)
        {
            tan1=(pow(-1,n)*pow(u,2*n+1))/(2*n+1);
            sum1+=tan1;
            printf("%d\t%f\n",n,sum1);
        }
        printf("Angle is %.2f rad\nInverse tangent=%f",u,sum1);
    }
    //Hyperbolic
    else{
        for(n=1;n<=30;n++)
        {
            tan2=(pow(u,2*n-1))/(2*n-1);
            sum2+=tan2;
            printf("%d\t%f\n",n,sum2);
        }
        printf("Angle is %.2f rad\nInverse of hyperbolic tangent=%f",u,sum2);
}}
