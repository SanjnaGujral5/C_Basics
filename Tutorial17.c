#include<stdio.h>

int main()
{
    //label:
    //printf("We are inside lavel");
   // goto end;
   // printf("Hello world\n");
   // goto label;
   // end:
   int num;
     for (int i = 0; i < 8; i++)
   {
    printf("%d\n", i);
    for (int j  = 0; j < 8; j++)
    {
       printf("Enter the number, enter 0 to exit\n");
       scanf("%d", &num);
       if(num==0){
        goto end;
       
    }
    
   }
   
   }
   end:
    return 0;
}



