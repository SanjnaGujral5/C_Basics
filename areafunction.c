#include <stdio.h>
#include <math.h>
int main()
{
    int side;
    printf("Enter the value of side\n");
    scanf("%d", &side);
    printf("The value of area is %d", (int) pow(side,2));  //for pow we use %f since it is double datatype or we can use typecasting
   // which is used here
    

    return 0;
}
