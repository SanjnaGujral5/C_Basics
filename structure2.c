#include <stdio.h>

struct student
{
    int rollno;
    float cgpa;
    char name[100];
};
int main()
{
    struct student s1 = {2306178, 9.2, "Sanjna"};
    struct student *ptr = &s1;
    printf("student roll = %d\n", (*ptr).rollno);
    printf("student roll = %d\n", ptr->rollno); // both give same output
    

    return 0;
}
