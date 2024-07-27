#include <stdio.h>
int main()
{
    int birthday, birthmonth, birthyear;


    int currentday = 12, currentmonth = 10, currentyear = 2023;
    int ageinyears, ageinmonth, ageindays;
    printf("Enter date of birth(DD MM YYYY)");
    scanf("%d %d %d, &birthday, &birthmonth, &birthyear");

    if(birthday<1 || birthday>31 || birthmonth<1 || birthmonth>12 || birthyear<1900){
        printf("Invalid input\n");

    }
    if(ageindays<0){
        ageinmonth --;
        ageindays +=30;
    }
    if(ageinmonth<0){
        ageinyears--;
        ageinmonth +=12;

        printf("Your age is %d years, %d month, %d days\n", ageinyears, ageinmonth, ageindays);

    }
    return 0;
}
