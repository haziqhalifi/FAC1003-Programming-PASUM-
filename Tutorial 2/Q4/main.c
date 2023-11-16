#include <stdio.h>
#define text1"Congratulations , you succeeded."
#define text2"Sorry , you failed."
int main(void)
{
    int error;
    printf("Insert your error : \n");
    scanf("%d", &error);
    if (error=0)
        printf(text1);
    else
        printf(text2);
return 0;
}
