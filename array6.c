#include<stdio.h>
int main()
{
    int a;  //4 Byte
    int *ptr = &a;
    
   short d;   //2 Byte
    short *k = &d;
   
    long f;    //4 Byte
   long *p = &f;
    
    char ch;    //1 Byte
    char *c = &ch;
    printf("The address value of a is %u\n", ptr); 
    ptr++;
    printf("The address value of a is %u\n", ptr);
    printf("The address value of d is %u\n", k);
    k++;
    printf("The address value of d is %u\n", k);
    printf("The address value of f is %u\n", p);
    p++;
    printf("The address value of f is %u\n", p);
     printf("The address value of ch is %u\n", c);
    c++;
    printf("The address value of ch is %u\n", c);
    
       return 0;
}





    
