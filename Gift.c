#include<stdio.h>

int main()
{
    int marks;
    printf("Enter your marks\n");
    scanf("%d", & marks);
    printf("You have entered %d as your marks\n");
    if (marks>90){
    
    printf("You have passed maths and science exam and you will get 45 coins");
    }

    else if(marks>60)
    {
        printf("You have passed maths exam and you will get 15 coins");
    }
    else if(marks>50)
    {
        printf("You have passed science exam and you will get 15 coins");
    }
    else {
        printf("You cannot get anything");

    }


    return 0;

}
