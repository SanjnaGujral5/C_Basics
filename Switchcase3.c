#include<stdio.h>
int main()
{
    int week;
    printf("Enter the value of week\n");
    scanf("%d", &week);
    switch (week){
        case 0:
        printf("Enter the weekday sunday\n");
        break;
    
    case 1:
    printf("Enter the weekday monday\n");
    break;
    case 2:
    printf("Enter the weekday tuesday\n");
    break;
    case 3:
    printf("Enter the weekday wednesday\n");
    break;
    case 4:
    printf("Enter the weekday thursday\n");
    break;
    case 5:
    printf("Enter the weekday friday\n");
    break;
    case 6:
    printf("Enter the weekday saturday\n");
    break;

    default:
    printf("invalidinput");
    }
    return 0;
}
