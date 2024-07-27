#include <stdio.h>

int main()
{
    int n, i, sum=0;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    for(i=0; i<=n; i++){
       // sum +=i;   both are same 
       sum = sum+i;
    }
    printf("The value of sum(1 to 10)is %d", sum);
    return 0;
}
