#include <stdio.h>
double m(int n);
int main()
{
    int i;
    printf("i\tm(i)\n");
    for (i=1;i<=20;i++)
        printf("%d\t%.4lf\n",i,m(i));
    return 0;
}
double m (int n)
{
    double sum=0;
    int i;
    for (i=1;i<=n;i++)
        sum+=i*1.0/(i+1);
    return sum;
}
