#include<stdio.h>

int main()
{
    int a =5;
    int b;
    int c;
    //printf("Enter a number\n");
   // scanf("%d", &a);
    b = a<<1;
    printf("Bitwise left shift %d\n", b);
    c = a>>2;
    printf("Bitwise right shift %d\n", c);

    return 0;
}
