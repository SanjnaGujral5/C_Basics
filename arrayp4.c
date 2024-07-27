#include <stdio.h>
int main()
{
    int i;
    int arr[10];
   int *ptr = &arr[10];
   for(int i=0; i<10; i++){
    printf("Enter the value of arr[i]\n");
    scanf("%d", &arr[i]);


   }
   for(int i=0; i<10; i++){
    printf("The value of arr[i] is %d\n", arr[i]);
   }

    return 0;
}
