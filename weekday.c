#include <stdio.h>
int main(){
    char firstLetter,SecondLetter;
    printf("Enter the firstletter of a weekday:\n");
    scanf("%c", &firstLetter);

    switch(firstLetter){
        case 'M':
        printf("Enter Monday\n");
        break;
        case'T':
        printf("is it Tuesday or Thursday?Enter the SecondLetter\n");
        scanf(" %c", &SecondLetter); // gap between first semicolumn and %c
        if(SecondLetter == 'u'){
            printf("it is Tuesday\n");

        }
        else if (SecondLetter == 'h'){
            printf("it is Thursday\n");

        }
        else{
            printf("invalid input\n");
        }
        break;
        case'W':
        printf("Enter wednesday\n");
        break;
        case'F':
        printf("Enter friday\n");
        break;
        case'S':
        printf("is it Saturday or Sunday?Enter the SecondLetter\n");
        scanf(" %c", &SecondLetter); // gap between first semicolumn and %c
         if (SecondLetter == 'u'){
            printf("Enter Sunday\n");
        }
        else{
            printf("invalid input\n");
        }
        break;
        default:
        printf("invalid input\n");
        
    }
    return 0;
}