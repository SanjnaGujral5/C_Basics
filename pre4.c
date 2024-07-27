#include <stdio.h>
// void main(){
//     unsigned int a = 1234;
//     unsigned char ch = a;
//     printf("%dh", ch);
    
// }
void main()
{
    // int a = 23;
    // int b = 51;
    // printf("The value of a&b is %d\n", a&b);
    // printf("The value of a/b is %d\n", a/b);
    // printf("The value of ~a is %d\n", ~a);
    // printf("The value of a^b is %d\n", a^b);
    // printf("The value of b>>3 is %d\n", b>>3);
    // int arr[3][3] = {1, 2, 3, 4, 5};
    // printf("%ld", sizeof(arr[1]));
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr, i;
     ptr=arr+4;
    for(i=0; i<5; i++)
    printf("%d", *(ptr-i));

   // return 0;
}
