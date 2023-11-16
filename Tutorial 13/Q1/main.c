#include <stdio.h>

int main()
{
    int a[2][2],i,j;
    float det;
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            printf("Insert value for a[%d][%d] :",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("%d\t%d\n%d\t%d\n\n",a[0][0],a[0][1],a[1][0],a[1][1]);
    printf("[1] Interchange leading diagonal elements:\n%d\t%d\n%d\t%d\n\n",a[1][1],a[0][1],a[1][0],a[0][0]);
    printf("[2] Change signs of the other 2 elements:\n%d\t%d\n%d\t%d\n\n",a[1][1],-a[0][1],-a[1][0],a[0][0]);
    det=a[0][0]*a[1][1]-a[0][1]*a[1][0];
    printf("[3] Find |A|:\n|A|=\n%d\t%d\n%d\t%d\n=%d-%d\n=%.f\n\n",a[0][0],a[0][1],a[1][0],a[1][1],a[0][0]*a[1][1],a[0][1]*a[1][0],det);
    if(det==0)
    {
     printf("This matrix is singular");
     return 0;
    }
    printf("Inverse matrix=\n1/|A|*|%d\t%d|\n      |%d\t%d|\n\n",a[1][1],-a[0][1],-a[1][0],a[0][0]);
    printf("=1/%.f*|%d\t%d|\n\t|%d\t%d|\n\n",det,a[1][1],-a[0][1],-a[1][0],a[0][0]);
    printf("=|%.2f\t%.2f|\n |%.2f\t%.2f|",1/det*a[1][1],1/det*-a[0][1],1/det*-a[1][0],1/det*a[0][0]);
    }



