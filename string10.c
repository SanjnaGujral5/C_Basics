#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char oldstring[50] = "oldstring";
    char newstring[] = "newstring";
    //strcpy(newstring, oldstring);
    strcat(newstring, oldstring);
    puts(newstring);
    return 0;
}
