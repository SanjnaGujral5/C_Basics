#include<stdio.h>

int main()
{
    float principal,rate,time,si;
    scanf("%f",&principal);
    scanf("%f",&rate);
    scanf("%f",&time);
    si = (principal*rate*time)/100;
    printf("%f",si);
    return 0;
}
