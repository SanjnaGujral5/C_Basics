#include <stdio.h>
int main()
{

    char firstletter;
    printf("Enter the first alphebet of weekday");
    scanf(" %c", &firstletter);
    switch (firstletter)
    {
    case 's':
        printf("Enter sunday or saturday\n");
        break;
    case 'm':
        printf("Enter monday\n");
        break;
    case 't':
        printf("Enter tuesday or thursday\n");
        break;
    case 'w':
        printf("Enter wednesday\n");
        break;
    default:
        printf("invalid result");
    }

    return 0;
}
