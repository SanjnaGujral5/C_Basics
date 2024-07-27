#include <stdio.h>

 typedef struct bankaccount 
{
    int accno;
    char name[100];

} acc;
int main()
{
    acc acc1 = {123, "Sanjna"};
    acc acc2 = {124, "riya"};
    acc acc3 = {125, "kajal"};

    printf("accno = %d", acc1.accno);
    printf("name = %s\n", acc1.name);

    printf("accno = %d", acc2.accno);
    printf("name = %s\n", acc2.name);

    printf("accno = %d", acc3.accno);
    printf("name = %s\n", acc3.name);



    return 0;
}
