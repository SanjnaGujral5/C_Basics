#include <stdio.h>
#include <string.h>
int  countlength( char arr[]);

int main()
{
   char name[100];
   fgets(name, 100, stdin);
   //printf("%d", countlength(name));
   int length = strlen(name);
   printf("%d", length);

    return 0;
}
int  countlength(char arr[]) {
    int count = 0;
    for(int i = 0; arr[i] !='\0'; i++){
        count++;
    }
    return count-1;
}
