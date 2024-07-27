#include <stdio.h>
int main()
{
    float C;
    printf("Enter the value of C\n", C);
    scanf("%f", &C);
    float F = C*9/5+32;
    printf("The value in Fahrenheit is %f", F);

    return 0;
}
