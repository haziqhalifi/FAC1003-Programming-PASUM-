#include <stdio.h>

int main()
{
    int a=3, b=7;
		if (a>=b)
			a=b%a;
		else
			a=7/3;
		printf("%d",a);

}
