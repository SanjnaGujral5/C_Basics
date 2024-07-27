#include <stdio.h>
int main(){
FILE *fptr;
// fptr = fopen("NewTest.txt", "r");
// if(fptr == NULL){
//     printf("file does not exist\n");
// }
// else{
//     fclose(fptr);
// }
// fclose(fptr);
fptr = fopen("Test.txt", "r");
char ch;
fscanf(fptr, "%c", &ch);
printf("character = %c\n", ch);
fscanf(fptr, "%c", &ch);
printf("character = %c\n", ch);
fscanf(fptr, "%c", &ch);
printf("character = %c\n", ch);
fscanf(fptr, "%c", &ch);
printf("character = %c\n", ch);
fscanf(fptr, "%c", &ch);
printf("character = %c\n", ch);


fclose(fptr);
return 0;

}