#include <stdio.h>

int main()
{
    int n,i,k,a[20],b[20];
    float ans;
    printf("Enter value number of elements,n : ");
    scanf("%d",&n);
    printf("Enter value scalar,k : ");
    scanf("%d",&k);
    printf("Enter %d value for the elements a :\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter %d value for the elements b :\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("\n\nADDITION");
    for(i=0;i<n;i++)
    {
        printf("\n  %d  +  %d =  %d",a[i],b[i],a[i]+b[i]);
    }
    printf("\n\nSUBSTRACTION");
    for(i=0;i<n;i++)
    {
        printf("\n  %d  -  %d =  %d",a[i],b[i],a[i]-b[i]);
    }
    printf("\n\nMULTIPLICATION");
        for(i=0;i<n;i++)
    {
        printf("\n  %d  *  %d =  %d",k,a[i],k*a[i]);
    }
    printf("\n\nDIVISION");
        for(i=0;i<n;i++)
    {
        ans=b[i]/2.0;
        if(b[i]%k==0)
        printf("\n  %d  /  %d =  %d",b[i],k,b[i]/k);
        else
        printf("\n  %d  /  %d =  %.1f",b[i],k,ans);
    }
}
//Matrix division problem- floating point.......
