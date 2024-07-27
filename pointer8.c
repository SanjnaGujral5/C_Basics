#include<stdio.h>
int main()
{
    int arr[]={10, 20, 36, 72, 45, 36};
    int *j, *k;
    j = &arr[4];
    k = (arr +4);
    if(j==k)
    printf("The two pointer point to the same location\n"); // arr[4] and (arr+4) both are same arr[4] points
    // to fifth element and (arr+4) add 4 to base arr which also points to fifth pointer
    else
    printf("The two pointers do not point to the same location\n");
    return 0;
}
