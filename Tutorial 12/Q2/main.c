#include <stdio.h>

int main()
{
    float energy[51];
    int n;

    printf("Number\tSpectral Energy\n");
    for (n=0;n<=50;n++)
    {
       energy[n]=(-pow( 1.602177e-19,2)/(4*22/7*8.854187e-12))/(2*5.291772e-11*pow(n+0.5,2));
       printf("%d\t%e\n",n,energy[n]);
    }

    return 0;
}


