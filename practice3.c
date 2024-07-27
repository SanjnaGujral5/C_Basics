#include <stdio.h>
int main()
{
    int n=8, i, sum=0;
    printf("Multipilication table of 8 is\n");
    for(i=1; i<=10; i++){
        printf("%d * %d = %d\n", n, i, n*i);
        sum +=n*i;

    }
    
   
    
    printf("The value of sum (8 to 80)is %d", sum);
    
    return 0;
}
