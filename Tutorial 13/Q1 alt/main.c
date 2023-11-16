#include <stdio.h>

int main()
{
    float a[2][2],b[2][2],det;
    int i,j;
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            printf("Insert value for a[%d][%d] :",i+1,j+1);
            scanf("%f",&a[i][j]);
        }
    }

    printf("You have entered matrix A:\n");
        for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            printf("%.2f ",a[i][j]);

        }
        printf("\n");
    }

    printf("The interchange diagonal and change sign:\n");
        for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            if(i==j){
            b[0][0]=a[1][1];
            b[1][1]=a[0][0];
            printf("%.2f ",b[i][j]);
            }
            else
            {
            b[i][j]=-a[i][j];
             printf("%.2f",b[i][j]);
            }
        }
        printf("\n");
    }
    det=a[0][0]*a[1][1]-a[0][1]*a[1][0];
    printf("|A|=%.2f-%.2f=%.2f\n",a[0][0]*a[1][1],a[0][1]*a[1][0],det);

    printf("The inverse :\n");
        for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            printf("%.2f ",b[i][j]/det);

        }
        printf("\n");
    }


}
