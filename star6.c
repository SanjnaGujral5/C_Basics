#include <stdio.h>

int main() {
    
   int n;
   printf("Enter the value of n\n");
   scanf("%d", &n);
   for(int i=1; i<n; i++){
    for(int j=1; j<n; j++){
        //if((i+j) <= n){
        if((i+j) >=n){
            printf(" ");
        }
        else{
            printf("*");
        }
    
    }
    printf("\n");
   }
    return 0;
}
// #include <stdio.h>
// int main() {
// int age = 22;
// int *ptr = &age;
// int _age = 25;
// int *_ptr = &_age;
// printf("%u\n", ptr);
// ptr++;
// printf("%u\n", ptr);
// ptr--;
// printf("%u\n", ptr);
// ptr = ptr - _ptr;
// printf("%u\n", ptr);
// ptr = &_age;
// printf("%d\n", ptr == _ptr);
// return 0;
// }

