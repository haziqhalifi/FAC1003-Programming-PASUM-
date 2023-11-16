#include <stdio.h>
#include <stdlib.h>

int main()
{
    int F;
    float C;
    printf("Fahrenheit\tCelcius\n");
    printf("_______________________\n");
    for(F=0;F<=100;F+=5)
    {
    C=(5.0/9.0)*(F-32);
    printf("%d\t\t%.2f\n",F,C);
    }
}
