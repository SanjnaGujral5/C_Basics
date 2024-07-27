#include <stdio.h>
// int main() {
//  int i, j, rows;
//  printf("Enter the number of rows: ");
//  scanf("%d", &rows);
//  for (i = 1; i <= rows; i++) {
//     for (j = 1; j <=rows; J++) {
//        printf("* ");
//     }
//     printf("\n");

// }
int main()
{
   int rows;
   printf("Enter the number of rows\n");
   scanf("%d", &rows);
   for (int i = 1; i <= rows; i++)
   {
      for (int j = 1; j <= rows; j++)
      {
         //if ((i + j) <= rows)
         if((i+j) >=rows)
         {
            printf(" ");
         }
         else
         {
            printf("*");
         }
      }
      printf("\n");
   }
   return 0;
}