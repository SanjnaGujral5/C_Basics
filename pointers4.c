#include <stdio.h>
void change(int *b)
{
//(*b)*=10;
    *b = (*b)* 10;

}
int main()
{
    int a=2;
    
    
     int *b = &a;

    printf("The value of variable a is %d\n", a);
    
    change(b);
    printf("Now value of a is %d\n", *b);
   
     
   
    return 0;
}
