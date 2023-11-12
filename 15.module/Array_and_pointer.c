#include <stdio.h>

int main()
{
    int ar[4] = {10, 20, 30, 40};

    printf("%p\n", &ar[0]);
    printf("%p\n", ar);

    printf("%d\n", ar[0]);
    printf("%d\n", *ar);
    printf("%d\n", *(ar + 2));
    printf("%d\n", 1[ar]);

    return 0;
}