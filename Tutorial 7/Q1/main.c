#include <stdio.h>

int main()
{
    int x;
    printf("Enter a positive even number : ");
    scanf("%d",&x);


    if(x%2==0)
            if(x>=0){

                if(x>=10000){
                    printf("\nThe place value of digit is TENs of THOUSANDs");
                    goto end;}


                if(x>=1000){
                    printf("\nThe place value of digit is THOUSANDs");
                    goto end;}

                if(x>=100){
                    printf("\nThe place value of digit is HUNDREDs");
                    goto end;}

                if(x>=10){
                    printf("\nThe place value of digit is TENs");
                    goto end;}}

                else
                    printf("\nPlease read instruction carefully\nTry again");
    end:
    return 0;
}
