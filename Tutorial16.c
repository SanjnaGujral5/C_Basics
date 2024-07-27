#include <stdio.h>

int main()
{
    int i, age; // break and continue
    for (i = 0; i < 10; i++)
    {

        printf("%d\nEnter your age", i);
        scanf("%d", &age);
        // if (age>10)
        //{
        // break;
        // }
        if (age > 10)
        {
            continue;
        }
        printf("You have not come across any continue statements");
    }
    return 0;
}
