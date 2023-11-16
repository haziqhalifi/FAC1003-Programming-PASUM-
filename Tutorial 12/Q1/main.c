#include<stdio.h>

int main()
{
    float a[10],sum1=0,sum2=0;
    int j=0,k=0,h=0;
    while (j<10)
    {
        printf("a[%d] = ",j);
        scanf("%f",&a[j]);
        j++;
    }
    do
    {
        sum1+=a[2*k];
        k++;
    }while (k<=4);

    while (h<=4){
        sum2+=a[2*h+1];
        h++;}

    printf("\nThe sum of a[2n] from n=0 to 4 is %f",sum1);
    printf("\nThe sum of a[2n+1] from n=0 to 4 is %f",sum2);
}
