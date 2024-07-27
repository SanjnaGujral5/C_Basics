#include <stdio.h>
#include <string.h>
struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main()
{
    // struct student s1 = {2306178, 9.2, "Sanjna"};
    // printf("student roll = %d\n", s1.roll);
    struct student ece[100];
    ece[0].roll = 2306178;
    ece[0].cgpa = 9.2;
    strcpy(ece[0].name, "Sanjna");
    printf("name = %s\n", ece[0].name);
    return 0;
}
