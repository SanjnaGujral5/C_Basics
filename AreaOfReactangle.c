#include <stdio.h>

int main()
{
    int x;
    printf("Enter the value of length\n");
    scanf("%d",&x);
    int y;
    printf("Enter the value of width\n");
    scanf("%d",&y);
    int a = x*y;

    printf("The value of area of reactangle is:%d", a);
    
    return 0;
}
