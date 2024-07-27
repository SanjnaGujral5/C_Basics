#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    
    
    if (a==0){
        
        printf("Enter the weekday as sunday\n", a);
        }
    else if(a==1){
        
        printf("Enter the weekday as monday\n", a);
         }
    
    else{
        printf("invalid input");
    }

    return 0;
}
