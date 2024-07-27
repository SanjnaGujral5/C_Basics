#include <stdio.h>
int main()
{
   int x = 4, y=0, z;
   while(x>0){
    x--;
    y++;
    if(x==y)
    continue;
    else
    printf("%d %d\n", x, y);
    
   } 
   //float x = 1.1;
   //while(x == 1.1){
   // printf("%f\n", x);
   // x = x - 0.1;
  // }
  //int x = 4, y = 0, z;
 // while(x>=0){
    //if(x == y)
   // break;
   // else
   // printf("%d %d\n", x, y);
   // break;
  //}
    
    return 0;
}
