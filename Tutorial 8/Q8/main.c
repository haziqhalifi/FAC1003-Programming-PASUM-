#include <stdio.h>

int main()
{
    char input;
    char password[7];
    printf("Enter your password\n");
    scanf("%s",&password);
    if (strcmp(password,"pasum21")==0)
        printf("\nYour password VALID");
    else if (strcmp(password,"pasum22")==0)
        printf("\nYour password VALID");
    else
        printf("\nWRONG password");

        printf("\n------------------\nDo you want to check again(Enter Y):");
        scanf("%c",&input);
        getchar();

    while (input=='Y'){
        printf("\nEnter your password\n");
        scanf("%s",&password);
        if (strcmp(password,"pasum21")==0)
            printf("\nYour password VALID");
        else if (strcmp(password,"pasum22")==0)
            printf("\nYour password VALID\n");
        else
            printf("\nWRONG password");

        printf("\n------------------\nDo you want to check again(Enter Y):");
        scanf("%c",&input);

    }
    if (input!='Y')
        printf("\nEND PROGRAM\nThank You!");
    return 0;
}
