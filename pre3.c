#include <stdio.h>
int main()
{
    int n =8;
    // printf("Enter the value of n\n");
    // scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=2*n; j++){
            if(j>n-1-i && j< n-1+i){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");

    }
    for(int i=n-1; i>=1; i--){
        for(int j=1; j<=2*n; j++){
            if(j>n-1-i && j< n-1+i){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");

    }




    return 0;
}
