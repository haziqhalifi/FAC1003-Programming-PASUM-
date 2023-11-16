#include <stdio.h>

int main()
{
    int i,n,sum=0;
	float avg;
	printf("Enter 10 integer positive numbers: \n");
	for (i=1;i<=10;i++)
	{
                printf("Number %d : ",i);

		scanf("%d",&n);
		if (n>0)
            sum +=n;
        else
            sum=sum;
	}
	avg=sum/10.0;
	printf("The sum of 10 integer positive numbers is : %d\nThe Average of 10 integer positive numbers is : %f\n",sum,avg);
}

