#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter the value of a, b, c, d\n");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if(a>b && a>c && a>d){
        printf("a is the greatest number\n");

    }
    else if(b>a && b>c && b>d){
        printf("b is greatest number\n");
    }
    else if(c>a && c>b && c>d){
        printf("c is greatest number\n");

    }
    else if(d>a && d>b && d>c){
        printf("d is greatest number\n");
    }
    else{
        printf("invalid input\n");
    }
    
    return 0;
}
