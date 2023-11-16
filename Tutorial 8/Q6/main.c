#include <stdio.h>

int main()
{
    int s,d,hc,hp,num,days;
    float ac,ap,tp,tc;
    printf("This program will find the average number of hours a day\neach given student spent on programming and on chemistry over a long weekend\n\n");
    printf("How many students are there?  ");
    scanf("%d",&num);
    printf("Enter the number of days in the long weekend: ");
    scanf("%d",&days);

    for(s=1;s<=num;s++)
    {
        printf("\n");
        tc=0;
        tp=0;
        for(d=1;d<=days;d++)
        {
            printf("Enter student %d day %d programming hrs: ",s,d);
            scanf("%d",&hp);
            printf("Enter student %d day %d chemistry hrs: ",s,d);
            scanf("%d",&hc);
            tp+=hp;
            tc+=hc;
        }

        ac=tc/days;
        ap=tp/days;
        printf("\nThe average number of hours per day spent programming by student %d is %.1f",s,ap);
        printf("\nThe average number of hours per day spent chemistry by student %d is %.1f",s,ac);
        if(ac==ap)
            printf("\nThis student spent the same amount of time on both subjects.\n");
        else if(ac>ap)
            printf("\nThis student averaged more time on chemistry.\n");
        else
            printf("\nThis student averaged more time on programming.\n");
    }
}
