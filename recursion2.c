#include <stdio.h>
int sum(int n);
int main()
{
   int b = 20;
   printf("The value of sum %d is %d\n",b,  sum(b)); 
    return 0;
}
int sum(int n){
    if(n!=0){
        return n + sum(n - 1);
    }
   else{
    return n;
   }
}

