#include <stdio.h>

int main()
{
    //int i=0, n=7, factorial=1;
    //for(i=1; i<=n; i++){
        //factorial *=i;

    //}
   // printf("The value of factorial %d is %d", n, factorial);
   int i=1, n=7, factorial=1;
   while(i<=n){
   factorial *=i;
   printf("The factorial is %d\n",factorial);
   i++;
   }
    return 0;
}
