#include <stdio.h>

int main()
{
    char input;
    char name[20];
    int sale,n=1,sum=0;
    float ave;
    printf("**** Cookie Sales Information ****\n");
    printf("\nPress 1 to enter the program or press any button to exit: ");
    scanf("%d",&input);
    while (input==1)
    {
       printf("Enter student name: ");
       scanf("%s",&name);
       printf("Enter number of boxes sold by Princess: ");
       scanf("%d",&sale);
       while (sale<0)
       {
          printf("Invalid entry. Re-enter number of boxes sold: ");
          scanf("%d",&sale);
       }

       sum+=sale;
        printf("\nPress 1 to enter the program or press any button to exit: ");
        scanf("%d",&input);
        ave=sum/n;
        if (input!=1)
        {
            printf("The average number of boxes sold by the %d students was %.2f",n,ave);
            goto tamat;
        }
        n++;

    }
    printf("No boxes were sold");

        tamat:
            return 0;


}
