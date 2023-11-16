#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year=0,input;
    float acres;
    printf("Please insert the acres of the forest (2500-14000) : ");
    scanf("%d",&input);

    for(acres=2500.0;acres<=input;year++)
    {
        acres=acres*1.02;
    }
    printf("\nYears are required to be completely reforested is %d.",year);


}
