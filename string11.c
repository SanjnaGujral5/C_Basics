#include <stdio.h>
void slice(char str[], int n, int m);
int main()
{
    char str[] = "Hello world";
    slice (str, 3, 6);

    return 0;
}
void slice(char str[], int n, int m){
    char  newstr[100];
    int j = 0;
    for(int i=3; i<=6; i++){
        newstr[j] = str[i];

    }
    newstr[j] = '\0';
    puts(newstr);
}