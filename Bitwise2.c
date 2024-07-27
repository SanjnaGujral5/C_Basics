#include <stdio.h>
int main(){
    int value, n;
    char shift_type;
    printf("Enter the initial value\n");
    scanf(" %d", &value);
    printf("Enter shift_type (L for left shift R for right shift)");
    
    scanf(" %C", &shift_type);
    printf("Enter the number of shift\n");
    scanf(" %d", &n);
    if(shift_type == 'L'){
        for(int i =0; i<n; i++){
            value = value <<1;
            printf("Value after left shift %d: %d\n, i+1, value");

        }
    } 
    else if(shift_type == 'R'){
    for(int i=0; i<n; i++){
        value = value >>1;
        printf("Value after right shift %d: %d\n",i+1, value);
    }
    }
    else{
        printf("Invalid input\n");
    }
    return 0;


    
}