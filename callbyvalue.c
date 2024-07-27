#include <stdio.h>
int sum (int a, int b);
int main()
{
    int x = 4, y = 7;
    printf("The value of 4+7 is %d\n", sum(x, y));
    return 0;  //x, y and a, b are different 
}
int sum (int a, int b){
    return a + b;
}
