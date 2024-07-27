#include <stdio.h>
void printstring(char arr[]);
int main()
{

     //char name[] = {'s' 'a' 'r' 'd' 'h' 'a' '\0'};
    // char name[] = "apna collage";
    // printf("%s", name);
    // char firstName[] = "Sanjna";
    // char lastName[] = "Gujral";
    // printstring(firstName);
    // printstring(lastName);
    // char firstname[50];
    // scanf("%s", firstname);
    // printf("Your name is %s", firstname);
    char fullname[50];
    gets(fullname);
    printf("Your name is %s", fullname);


    return 0;
}
void printstring(char arr[]){
    for(int i=0;arr[i] !='\0'; i++){
    printf("%c", arr[i]);
    }
    printf("\n");

}
