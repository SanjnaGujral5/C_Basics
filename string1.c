#include <stdio.h>
int main()
{
    //char str[] = "Sanjna";
   // char *ptr = str;
   // while (*ptr!='\0'){
       // printf("%c", *ptr);
       // ptr++;
   // }
   //char s[34];
  // printf("Enter your name : ");
  // scanf("%s", s);
  // printf("Your name is %s", s); //Here we can print only Sanjna but we cannot print Sanjna Gujral because of space between 
   //Sanjna and Gujral
   char s[34];
   printf("Ente ryour name:");
   gets(s);
   //puts(s);
   printf("Your name is %s", s); //By using gets(s) we can print Sanjna Gujral


    return 0;
}
