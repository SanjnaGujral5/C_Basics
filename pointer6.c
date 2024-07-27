#include <stdio.h>

int main()
{
    int i = 345;
    
    int *ptr;
    int **ptr_ptr;

    ptr = &i;
    ptr_ptr = &ptr;
    printf("The value of i is %d", **ptr_ptr);
    printf("The value of ptr is %d\n", *ptr);
    printf("The add value of ptr is %u\n", &ptr);
    printf("The add value of ptr_ptr is %u\n", &ptr_ptr);
    return 0;
}
// int main()
// {
// 	int i =  5;
// 	int *ptr = &i;
// 	int **pptr = &ptr;
	
// 	printf("%u\n", &ptr);
// 	printf("%u\n", &pptr);
	
//     return 0;
// }
