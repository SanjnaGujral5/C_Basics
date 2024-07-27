# include <stdio.h>
int main()
{
    int i;
    char arr[20];
    
    for(i=0; i<20; i++){
       printf("Enter the value of arr[i]\n");
    scanf(" %c", &arr[i]);
    printf("The value of arr[i] is %c\n", arr[i]);//we can use single for loop or two for loops as well single loop print value
    // just after geting input from user and two loop print all values in one place after getting input from user 


        
    }
    //for(i=0; i<20; i++){
       // printf("The value of arr[i] is %c\n", arr[i]);
    //}

    return 0;
}
