#include <stdio.h>
#define MERGE(a,b) a##b

int main()
{
    char chara1,chara2,chara3,chara4,chara5;

    printf("Input Character 1 : ");
    scanf("%c/n", &chara1);
    getchar();
    printf("Input Character 2 : ");
    scanf("%c", &chara2);
    getchar();
    printf("Input Character 3 : ");
    scanf("%c", &chara3);
    getchar();
    printf("Input Character 4 : ");
    scanf("%c", &chara4);
    getchar();
    printf("Input Character 5 : ");
    scanf("%c", &chara5);
    getchar();
    printf("\n**********************\n  Your sign is %c%c%c%c%c\n**********************",MERGE(chara,1),MERGE(chara,2),MERGE(chara,3),MERGE(chara,4),MERGE(chara,5));
    return 0;
}
