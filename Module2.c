#include<stdio.h>

int main()
{
    int a;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    int b;
    printf("Enter the value of b\n");
    scanf("%d", &b);
    
    int r = a % b;
    printf ("%d", r);
    
    

    return 0;
}
