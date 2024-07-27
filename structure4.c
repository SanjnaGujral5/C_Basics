#include <stdio.h>
#include <string.h>
struct address{
        int houseno;
        int block;
        char city[100];
        char state[100];
    };
    

void printadd(struct address add);

int main()
{
    struct address add[20];
    printf("Enter info for persons 1:");
    scanf("%d", &add[0].houseno);
    scanf("%d", &add[0].block);
    scanf("%s", add[0].city);
    scanf("%s", add[0].state);
    printadd(add[0]);

    struct address add[20];
    printf("Enter info for persons 2:");
    scanf("%d", &add[1].houseno);
    scanf("%d", &add[1].block);
    scanf("%s", add[1].city);
    scanf("%s", add[1].state);
    printadd(add[1]);

    

    return 0;
}
void printadd(struct address add){
    printf("address is : %d, %d, %s, %s\n", add.houseno, add.block, add.city, add.state);
}

