#include <stdio.h>

int main()
{
    int a[3][4],i,j,sum=0;
    for(i=0;i<3;i++)
        for(j=0;j<4;j++)
            {
                printf("Enter value for element A[%d][%d]:\n",i+1,j+1);
                scanf("%d",&a[i][j]);
            }
    printf("\nElement A:\n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++)
            {
                printf("%d\t",a[i][j]);
                sum+=a[i][j];
            }
            printf("\n");}
    printf("Sum of all elements is %d",sum);
    return 0;
}
