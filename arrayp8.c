#include <stdio.h>
int main()
//int a;
//int b;
//int c;
//int arr[30];
//printf("%d %d %d\n", a, b, c);
//scanf("%d %d %d", &a, &b, &c);

{   int n, m, s;
    int arr[30];
    //printf("Enter the value of n\n");
    for(int i=1; i<=10; i++){
        printf("Enter the value of n\n");
        scanf("%d", &n);
    printf("%d * %d = %d\n", i, n, n*i);
    }

    for(int i=1; i<=10; i++){
       printf("Enter the value of m\n");
        scanf("%d", &m);

        printf("%d * %d = %d\n", i, m, m*i);
    }
     for(int i=1; i<=10; i++){
        printf("Enter the value of s\n");
        scanf("%d", &s);

        printf("%d * %d = %d\n", i, s, s*i);
     }
    return 0;
}
