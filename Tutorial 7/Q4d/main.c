#include <stdio.h>
int main()
{
int count = 0;

while(1)
{
    printf("%d, ",count);
    count = count+1;
    if(count>50)
    	   break;

}
printf("\n");

return(0);
}
