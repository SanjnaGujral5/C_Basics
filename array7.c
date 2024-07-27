#include <stdio.h>
int main()
{
  char *c1 = 'a';
  char *c2 = 'b';
  char *c3 = 'c';
  char *c4 = 'd';

  char *ch;
  ch = &c2;
  char *ph;
  ph = &c3;
  printf("The value of ch is %u\n", ch);
  
  ch++;
  printf("The value of ch is %u\n", ch);
   printf("The value it is pointing to %d\n", &ch);
  
  ch--;
  ch--;
  printf("The value of ch is %u\n", ch);
  
  printf("The value of ph is %u\n", ph);
  ph++;
  printf("The value of ph is %u\n", ph);
  ph--;
  ph--;
  printf("The value of ph is %u\n", ph);
  
return 0;
}
