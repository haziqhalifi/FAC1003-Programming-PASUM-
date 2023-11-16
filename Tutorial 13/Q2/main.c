#include <stdio.h>

int main()
{
    int a[3][3],b[3][3],i,j,k,sum=0,multi;
    printf("Input elements in the first matrix:\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("element-[%d],[%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nInput elements in the second matrix:\n");
        for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("element-[%d],[%d]: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nThe First matrix is :\n");
        for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);

        }
        printf("\n");
    }
        printf("\nThe Second matrix is :\n");
        for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%d ",b[i][j]);

        }
        printf("\n");
    }
    printf("\nThe multiplication of two matrix is :\n");
        for (i=0;i<3;i++)
    {
        for (k=0;k<3;k++)
        {
            start:
                for (j=0;j<3;j++)
            {
            multi=a[i][j]*b[j][k];
            sum+=multi;
            }
            k++;
            printf("%d ",sum);
            goto start;

        }

    }
    return 0;
}
