#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter three numbers\n a");
    
    scanf("%d\n", &a);
    scanf("%d\n", &b);
    scanf("%d\n", &c);

    if (a>b && a>c)
    {
        printf("Greatest number is %d", a);

    }
    else if(b>a && b>c){
        printf("Greatest number is %d", b);
    }
    else if(c>a && c>b){
        printf("Greatest value is %d", c);
    }
    
    return 0;
}


