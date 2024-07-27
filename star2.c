#include <stdio.h>
int main()
{
    int i, j, rows;
    printf("Enter the number of rows:");
    scanf("%d", &rows);
    // for(i = 1; i <= rows; ++i){
    // for(j = i; j <= 5; ++j){
    for (i = 0; i <= rows; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
    // printf("* ");
}
// printf("\n");
//}

// return 0;
//}
