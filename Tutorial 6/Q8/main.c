#include <stdio.h>

int main()
{
   int pin1,pin2;
   printf("Set your new 4 digit PIN : ");
   scanf("%d",&pin1);
    do
   {
       printf("\nPlease reconfirm your new PIN : ");
       scanf("%d",&pin2);
   }while(pin1!=pin2);
   printf("\nCongratulation,you have succesfully changed your PIN.");
   printf("\nPlease select yout menu or exit.\nTHANK YOU");
}
