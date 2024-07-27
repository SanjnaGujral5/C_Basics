#include <stdio.h>
int main()
{

    int arr[10] = {2, 9, 44, 65, 12, 687, 23, 1, 67, 100};
    int max, min;
    max = arr[0];
    min = arr[0];
    //printf("The max value is %d\n", arr[5]);
    //printf("The min value is %d\n", arr[7]);
    for(int i=0; i<10; i++) {
        if(arr[i] >= max) max = arr[i];
        if(arr[i] <= min) min = arr[i];
    }
    printf("max value is %d\n", max);
    printf("min value is %d\n", min);

    return 0;
}
