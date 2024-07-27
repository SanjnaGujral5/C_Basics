#include <stdio.h>
struct complex{
        int real;
        int img;
    };

    int main()
    {
        // struct complex number1 = {5, 8};
        // struct complex *ptr = &number1;
        // printf("real part = %d\n", ptr->real);
        // printf("img part = %d\n", ptr->img);
        struct complex number[5] = {5, 8};
        printf("real part=%d\n",  number[0].real);
        printf("img part=%d\n",  number[0].img);
        return 0;
    }
    