#include <stdio.h>

int main()
{
    int physics, chemistry, maths, Total;
    printf("Enter your physics marks\n");
    scanf("%d", &physics);
     printf("Enter your chemistry marks\n");
    scanf("%d", &chemistry);
      printf("Enter your maths marks\n");
      scanf("%d", &maths);
      Total = (physics + chemistry + maths)/3;
      if((Total<40) || physics<33 ||chemistry<33 ||maths<33){
        printf("Your total percentage is %d and you are fail", Total);
      }
        else{
            printf("Your total percentage is %d and you are pass", Total);
        }
      
    return 0;
}

