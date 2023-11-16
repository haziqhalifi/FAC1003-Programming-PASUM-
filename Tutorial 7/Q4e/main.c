#include <stdio.h>
int main()
{
int count;

for(count=0;;count-=2)
{
    printf("%d, ",count);
    count = count+1;
    if(count>50)
    	   break;

}
printf("\n");

return(0);
}
