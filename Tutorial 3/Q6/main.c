#include <stdio.h>
#define Name "Enter your full name: "
#define Date "Enter your date of birth: "
#define Add "Enter your current address: "
#define Food "Enter your favourite food: "
#define Detail "Your details are: "

int main()
{

    char name[30],date[30],add[30],food[30];

    puts(Name);
    gets(name);
    puts(Date);
    gets(date);
    puts(Add);
    gets(add);
    puts(Food);
    gets(food);

    puts(Detail);
    puts(name);
    puts(date);
    puts(add);
    puts(food);
    return 0;
}
