#include <stdio.h>
#define ms "Enter your monthly salary in RM:"
#define me "Enter your monthly expenses in RM:"
#define as "Annual total saving is RM"
int main()
{
    int Mth_Sal,Mth_Exp,Ann_Sav,Tot_Sal,Tot_Exp;

   puts(ms);
   scanf("%d",&Mth_Sal);
   Tot_Sal=Mth_Sal*12;

   puts(me);
   scanf("%d",&Mth_Exp);
   Tot_Exp=Mth_Exp*12;

   Ann_Sav=Tot_Sal-Tot_Exp;
   printf("%s %d",as,Ann_Sav);
    return 0;
}
