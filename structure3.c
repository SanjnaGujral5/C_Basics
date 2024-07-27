#include <stdio.h>
#include <string.h>
// void printInfo(struct student s1);

struct student
{
    int rollno;
    float cgpa;
    char name[100];
};
void printInfo(struct student s1);

int main()
{
    struct student s1 = {2306178, 9.2, "Sanjna"};
    // s1.rollno = 2307177;
    printf("student.roll = %d\n", s1.rollno);
    // printf("student information :\n");
    // printf("student.roll = %d\n", s1.rollno);
    // printf("student.cgpa = %f\n", s1.cgpa);
    // printf("student.name = %s\n", s1.name);

    printInfo(s1);

    // return 0;
}
void printInfo(struct student s1)
{
    printf("student information :\n");
    printf("student.roll = %d\n", s1.rollno);
    printf("student.cgpa = %f\n", s1.cgpa);
    printf("student.name = %s\n", s1.name);
    // s1.rollno = 2307177;
}
