#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[4][4],i,j,sum1=0,sum2=0;
    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
            {
                printf("Enter value for element A[%d][%d]:\n",i+1,j+1);
                scanf("%d",&a[i][j]);
            }
printf("\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++)
            {
                printf("%d\t",a[i][j]);
                sum1+=a[i][j];
                if (a[i][j]%3==0||a[i][j]%7==0)
                    sum2+=a[i][j];
            }
        printf("\n");}

printf("\nSum of all elements :%d\n",sum1);
printf("Sum of all elements which divisible by 3 or 7:%d",sum2);
}
