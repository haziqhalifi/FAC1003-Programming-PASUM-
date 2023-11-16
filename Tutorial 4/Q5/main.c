//5.	Write a C program that reads a letter of an alphabet and determines and prints whether it is vowel or consonant.
#include <stdio.h>

int main()
{
char let;
printf("Enter a letter\n");
scanf("%c",&let);
if (let=='a'||let=='e'||let=='i'||let=='o'||let=='u'||let=='A'||let=='E'||let=='I'||let=='O'||let=='U')
    printf("%c is a vowel alphabet",let);
else
    printf("%c is a consonant alphabet",let);
}
