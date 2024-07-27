#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    int arr[10];
    for (int i =1; i<=10; i++)
    {
        printf("%d * %d = %d\n", i, n, n * i);
    }
    return 0;
}
