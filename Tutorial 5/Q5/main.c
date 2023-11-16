#include <stdio.h>

int main()
{
    int he,me,hl,ml,hp,mp,hr,hb,cl;
    float tot;
    printf("1 : Car\n2 : Truck\n3 : Bus\nEnter class of vehicle : ");
    scanf("%d",&cl);
    printf("Hour vehicle entered lot	(0 - 24)?\t");
    scanf("%d",&he);
    printf("Minute vehicle entered lot	(0 - 60)?\t");
    scanf("%d",&me);
    printf("Hour vehicle left lot\t	(0 - 24)?\t");
    scanf("%d",&hl);
    printf("Minute vehicle left lot\t	(0 - 60)?\t");
    scanf("%d",&ml);
    printf("\nClass of vehicle : %d",cl);
    printf("\nTIME-IN\t\t\t%d:%d",he,me);
    printf("\nTIME-OUT\t\t%d:%d\n\t\t      -------",hl,ml);

    if (ml<me){
        ml=ml+60;
        hl=hl-1;
        }
    else{
        ml=ml;
        hl=hl;
        }

    hp=hl-he;
    mp=ml-me;
    printf("\nPARKING TIME\t\t%d:%d",hp,mp);

    if (mp>0)
        hr=hp+1;
    else
        hr=hp;

    printf("\nROUNDED PARKING TIME %d hours ",hr);

    switch(cl){
    case 1:
        hb=hr-3;
        if (hb>0)
            tot=3*1+hb*1.5;
        else
            tot=hr*1.0;
        break;
    case 2:
        hb=hr-2;
        if (hb>0)
            tot=2*2+hb*2.5;
        else
            tot=hr*2;
        break;
    case 3:
        hb=hr-1;
        if (hb>0)
            tot=2.5+hb*3.7;
        else
            tot=hr*2.5;
        break;
    default : printf("\nPlease insert class of vehicle again");
              return 0;
    }

    if (tot<0)
        printf("\nPlease read instruction carefully");
    else
        printf("\nTOTAL CHARGES	RM%.2f",tot);
}
