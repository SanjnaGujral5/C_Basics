#include <stdio.h>

int main()
{
    //int a=5;
    //int *ptr;
    //ptr = &a;
    //printf("The adderess of variable a is %u\n", &a);
    //printf("The value of variable a is %d\n", *ptr);
    //printf("The value of variable is %u\n", *ptr);

    // Both code are correct
    int a = 5;
   int *b;
   b = &a;
   printf("The address value of a is %u\n", &a);
   printf("The value of variable is %d\n", *b);
   printf("The value of variable is %d\n", *(&a));

    
    return 0;
}
