#include<stdio.h>
int main()
{
    int weekday;
    printf("Enter the number of weekday\n");
    scanf("%d", &weekday);
    if(weekday == 1){
        printf("Enter Sunday or Saturday\n");
    }
    else if(weekday == 2){
        printf("Enter Monday\n");
    }
    else if(weekday == 3){
        printf("Enter Tuesday or Thrusday");
    }
    else if(weekday == 4){
        printf("Enter Wednesday");
    }
    else if(weekday == 5){
    printf("Enter Friday");
    }
    else{
        printf("invalid result");
    }
    return 0;
}
