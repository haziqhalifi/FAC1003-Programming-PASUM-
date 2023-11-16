#include <stdio.h>

int main()
{
    int a = 5674;
    int b = 066666;
    int c = 0xcdef2;

    printf("(a)%d\n",a);
    printf("(b)%+d\n",a);
    printf("(c)%.6d\n",a);
    printf("(d)%06d\n",a);
    printf("(e)%+06d\n",a);
    printf("(f)%d\n",c);
    printf("(g)%x\n",c);
    printf("(h)%#0d\n",b);
    printf("(i)%#X\n",c);
    printf("(j)%d\n",a);
    printf("(k)%-#6x\n",a);
    printf("(l)%#X\n",a);

    return 0;
}
