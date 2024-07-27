#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter a number\n");
    scanf("%d", &n);
    printf("Multiplication table of %d\n");
    for(i=10; i; i--)
    printf("%d * %d = %d\n",n, i,  n * i);

    return 0;
}
