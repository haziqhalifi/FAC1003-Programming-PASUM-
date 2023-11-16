#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year=0;
    float acres=2500.00;
    printf("YEAR\tFORESTED ACRES AT END OF YEAR\n");
    printf("--------------------------------------\n");
    printf(" %d\t\t%.2f\n",year,acres);
    year++;
    for(;year<=20;year++)
    {
        acres=1.02*acres;
        printf(" %d\t\t%.2f\n",year,acres);
    }
}
