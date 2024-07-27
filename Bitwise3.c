# include <stdio.h>
int main()
{
    int a,  shifttype, shiftnumber;
    char L, R;
    printf("Enter value of a\n");
    scanf("%d",  &a);
    printf("Enter shifttype\n");
    scanf(" %c", &shifttype);
    //printf("Enter shiftnumber\n");
    //scanf("%d ", &shiftnumber);
    //int b = a<<1;
    if(shifttype == 'L'){
      int b = a << 1;
    printf("The value of b is %d\n", b);
    }
    else if(shifttype == 'R'){
      int b = a >> 1;
     printf("The value of b is %d\n", b);   

    }

    return 0;
}
