#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the value of a\n");
    scanf("%d", &a);
      printf("Enter the value of b\n");
    scanf("%d",&b);
      printf("Enter the value of c\n");
    scanf("%d", &c);
    if(a == b && b == c){
        printf("All input numbers are equal\n");

    }
    else if(a!=b && b!=c){
      printf("All inputs are different\n");
    }
    else if(a^b == 0 && a^c == 1){
      printf("Two of them are equal\n");
    }
    else{
        printf("invalid input");
    }
    return 0;
}
