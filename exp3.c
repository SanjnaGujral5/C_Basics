

#include<stdio.h>
int main()
{
   int date, month, year;
   printf("Enter the value of date, month, year\n");
   scanf("%d%d%d", &date, &month, &year);
   if (year<2000 || year == 2000 && month<8 || month == 8 && date <15){
    printf("He/She was born before 15.08.2000");
   }
   else if ("year == 2000 && month == 8 && date == 15.08.2000\n"){
   printf("He/She was born on 15.08.2000\n");

}
else{
    printf("He/She was born after 15.08.2000\n");

}
return 0;

}