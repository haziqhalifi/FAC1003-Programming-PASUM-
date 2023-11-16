#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=1,choice,numcan;
    printf("Enter the number of drink can :\n");
    scanf("%d",&numcan);
    test :
    if (n<=numcan){
     printf("1:Coke 2:Sprite 3:Pepsi\nEnter a number:\n");
    scanf("%d",&choice);
     switch(choice){
        case 1: printf("You have selected Coke.\n\n");
                break;
        case 2: printf("You have selected Sprite.\n\n");
                break;
        case 3: printf("You have selected Pepsi.\n\n");
                break;
        default: printf("Wrong selection. No refund is given.”");
    }
    n+=1;
    goto test;
    }
    else
     printf("Thank you for your purchases. Please buy again.");








}

