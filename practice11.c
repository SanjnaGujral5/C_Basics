#include <stdio.h>
int main()
{
    int num[]={24,34,12,44,56,17};
    int i;
    for(i=0; i<=5; i++){
    printf("address = %u", &num[i]);
    printf("\nelement = %d %d\n", num[i], *(num+i)); //num[i], *(num+i), *(i+num), i[num] all are same
    printf("%d %d\n", *(i+num), i[num]);
    }
    return 0;
}
