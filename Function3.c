#include <stdio.h>
//sum is a function which take a and b as input and returns an integer as an outout
int sum(int a, int b);  // function prototype declaration

int main()
{
  int c= sum(2, 5);  // function call
    printf("The value of c is %d", c);
    return 0;
}
int sum (int a, int b){
    int result;
    result = a + b;
    return result;
}
