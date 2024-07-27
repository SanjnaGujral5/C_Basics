#include <stdio.h>
int main(){

char c;
printf("Enter the first letter of weekday\n");
scanf(" %c", &c);
switch(c){
    case 'S':
    printf("Enter sunday or saturday\n");
    break;
    case 'M':
    printf("Enter monday\n");
    break;
    case 'T':
    printf("Enter tuesday or thursday\n");
    break;
    case 'W':
    printf("Enter wednesday\n");
    break;
    case 'F':
    printf("Enter friday\n");
    
    return 0;

}







}