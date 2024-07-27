#include <stdio.h>

int main()
{
    int x;
    printf("Enter Divinded :");
    scanf("%d",&x);
    int y;
    printf("Enter Divisor :");
    scanf("%d",&y);
    //int q = x/y;
   // int r = x-(y*q);
    //printf("The Remainder when %d  is devided by %d  is :%d",x,y,r);
    int r = x % y;
   // printf("The Remainder when %d is divided by %d is :%d",x,y,r);
   printf("%d/%d = %d", x, y, r);
    
    return 0;
}
