#include <stdio.h>

int main()
{
    int num,sum=0,n=0,average;
    printf("Enter a score or type -99 to stop : ");
    scanf("%d",&num);

    while(num!=-99)
    {
        n++;
        sum+=num;
        average=sum/n;
        printf("Sum of the scores is %d",sum);
        printf("\nAverage of the scores is %d",average);
        printf("\nEnter a score or type -99 to stop : ");
        scanf("%d",&num);
    }
    return 0;
}
