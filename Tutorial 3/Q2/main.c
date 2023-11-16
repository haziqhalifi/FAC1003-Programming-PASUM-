#include <stdio.h>

int main()
{
    double i=5.678;

    printf("(a)%f\n",i);
    printf("(b)%+f\n",i);
    printf("(c)%+f\n",i);
    printf("(d)%.2f\n",i);
    printf("(e)%09f\n",i);
    printf("(f)%+09f\n",i);
    printf("(g)%10.3f\n",i);
    printf("(h)%e\n",i);
    printf("(i)%10.2E\n",i);

    return 0;
}
