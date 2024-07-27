#include <stdio.h>
int main()
{
    //int a = 1;
    //if(a){
       // printf("i am inside if");

    //}
    int a = 10;
    int b = 0;
    if(b &&(a = 20)){
        printf("%d %d", a, b);
    }
    else{
        printf("%d %d", a, b);
    }
    return 0;
}
