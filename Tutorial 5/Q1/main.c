#include <stdio.h>
#define kmh(x) (x*1.60934)

int main()
{
 int x;
 float kmh;
 printf("Enter the speed of wind in miles:");
 scanf("%d",&x);
 kmh=x*(1.60934);
    if (kmh>=119&&kmh<=153)
        printf("Moderate damage. Roofs severely stripped");
    else if((kmh>=154)&&(kmh<=177))
        printf("Considerable damage. Roofs torn off");
    else if ((kmh>=178)&&(kmh<=208))
        printf("Severe damage to houses and large buildings.");
    else if ((kmh>=209)&&(kmh<=251))
        printf("Extreme damage. Whole frame houses completely leveled");
    else if (kmh>=252)
        printf("Total destruction. Tall buildings collapse.");
    else
        printf("No damage");
}
