/*consider an array of size 10 which has values {2, 9, 44, 65, 12, 687, 23, 1, 67, 100}.
 write a c program to compute largest and smallest value contained in it */

 #include <stdio.h>
 int main()
 {
    
    int arr[10] = {2, 9, 44, 65, 12, 687, 23, 1, 67, 100};
   
    int max = arr[0];
    int min = arr [0];
    
        for(int i=1; i<10; ++i){
            if(arr[i]> max){
                max =  arr[i];

            }
            if (arr[i]< min){
                min = arr[i];
            }
        }
        printf("The max value is %d\n", max);
         printf("The min value is %d\n", min);
    
    return 0;
 }
 