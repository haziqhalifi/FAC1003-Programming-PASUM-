#include<stdio.h>
int perm(int);
int main(void)
{
    int res , n, r;

    printf("FORMULA FOR PERMUTATION");
    start:
    printf("\n\nEnter a positive integer for n: ");
    scanf("%d",&n);
    printf("Enter a positive integer for r: ");
    scanf("%d",&r);

if(n<0)
        {
          printf("Math error\n");
          goto start;
        }
    else if(r<0)
        {
          printf("Math error\n");
          goto start;
        }
    else if(r>n)
        {
          printf("Math error\n");
          goto start;
        }


     res=perm(n)/perm(n-r);

     printf("ans: %d", res);

     return 0;
}




int perm(int n)
{
    int res,r;

    if(n==0)
        {
            res=1;
            printf("when perm(%d)--%d\n",n,res);
        }
    else if(n==1)
        {
            res=1;
            printf("when perm(%d)--%d\n",n,res);
        }

    else if(n>1)
        {
            res=((n)*(perm(n-1)));

        }
    printf("when n=%d - ans:%d\n",n,res);
    return res;
}
