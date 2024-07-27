#include <stdio.h>
int fibonacci(int n);

int main()
{
    int a=5;
    printf("The value of fibonacci %d is %d\n", a, fibonacci(a));
    
    return 0;
}
int fibonacci(int n){
    printf("calling fibonacci %d\n", n);
    if(n==1 || n==2){
    
     return 1;
    }
    else{
        return fibonacci(n-1) + fibonacci(n-2);
        
    }
}
