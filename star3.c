#include <stdio.h>
int main()
{
    //int lineNo = 1;
    //int NoOfStars;
   // while(lineNo<6){
       // NoOfStars = 0;
        //while (NoOfStars<6-lineNo);
        //printf("*");
        
        //NoOfStars++;
    //}
       // printf("\n");
       // lineNo++;
    
     int n;
     printf("Enter the value of n\n");
     scanf("%d", &n);
     
     
     for(int i=0; i < n; i++){
        for(int j=0; j < n; j++){

          if(i+j>=n-1){
           //if(i+j<=n-1){
        printf(" * ");

     }
     else{
        printf(" ");
     }
     }
     printf("\n");
     
     }
   
    return 0;
}
