#include <stdio.h>

int main()
{
    int a;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    int b;
    printf("Enter the value of b\n");
    scanf("%d", &b);
    int c = a^b;
    printf("Output = %d", a^b);//a^b means XOR of a and b

    return 0;
}


