#include <stdio.h>

int main()
{
    int num;
    printf("Enter the value of year\n");
    scanf("%d", &num);
    if(num % 4 == 0 && num % 400 == 0 || (num % 100!= 0)){
        printf("Year is leap year\n");

    }
    else{
        printf("Year is not leap year\n");
    }
    return 0;
}
