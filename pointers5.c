#include <stdio.h>
void sumAndAvg(int a, int b){
     *sum = a+b;
     *Avg = (float)(*sum)/2;
}

int main()
{
   int i, j, sum;
   float Avg;
   i = 3;
   j = 6;
   sumAndAvg(i, j, &sum, &Avg);
   printf("The value of sum is %d\n", sum);
   printf("The value of Avg is %f\n", Avg); 
    return 0;
}
