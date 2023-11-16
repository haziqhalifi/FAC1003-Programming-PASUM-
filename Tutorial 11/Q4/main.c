#include <stdio.h>
int gcd(int,int);
int main()
{
    int n1,n2,ans;
    printf("Enter two digit:\n");
    scanf("%d",&n1);
    scanf("%d",&n2);
    ans=gcd(n1,n2);
    printf("\ngcd(%d,%d)= %d",n1,n2,ans);
}
int gcd(int n1, int n2)
{
    while (n1!=n2){
        if (n1>n2)
            return gcd(n1-n2,n2);
        else
            return gcd(n1,n2-n1);}

}
