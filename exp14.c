#include <stdio.h>
void display();
int main()
{
    int array[26], i;
    for(i=0; i<=25; i++){
        array[i] = 'A'+i;
        printf("%d %c\n", array[i], array[i]);

    }
   //int sub[50], i;
   //for(i=0; i<=48; i++)
   //{
   // sub[i] = i;
    //printf("%d %d\n", sub[i]);

  // }
  //printf("Only stupids use C?\n");
  //display();


  return 0;

}
//void display()
//{
    //printf("Fools too use C!\n");
    //main();
//}

   
