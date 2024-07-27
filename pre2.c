#include <stdio.h>
int main()
{
        //int i=4, *j, *k;
        //j = &i;
        //printf("The  add value of j is %u\n", j);

        //j = j+1;
        //printf("The add value of j is %u\n", j);
        
       // k = j+3;
        // printf("The add value of k is %u\n", k);
       // j = j+9;

       // printf("The add value of j is %u\n", j);
       //int arr[] = {10, 20, 36, 72, 45, 36};
       //int *j, *k;
      // j = &arr[4];
       //k = (arr+4);
       //if(j==k)
       //printf("The two pointer points to same location\n");
       //else
      // printf("The two pointers do not point to the same location\n");
      // int s[5][2]={
      //   {1234, 56},
      //   {1212, 33},
      //   {1434, 80},
      //   {1312, 78},
      //   {1524, 75},

      // };
      //int i;
      //for(i =0; i<=3; i++)
      //printf("Address of %dth 1-D array = %u\n",i, s[i]);
        int n;
      printf("Enter the value of n\n");
      scanf("%d", &n);
      for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
          printf(" ");
        }
        for(int j=1; j<=2*i-1; j++){
          printf("*");
        }
        printf("\n");
      }
      for(int i=n-1; i>=1; i--){
        for(int j=1; j<=n-i; j++){
          printf("*");
        }
      
      for(int j=1; j<=2*i-1; j++){
        printf("*");
      }
      printf("\n");

      }
      return 0;
}
