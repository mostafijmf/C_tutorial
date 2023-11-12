#include <stdio.h>

int sum(int a, int b)
{
    int s = a + b;
    return s;
};

// int sum(void)
// {
//     int s = a + b;
//     return s;
// };

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", sum(a, b));
    printf("%p\n%p", &a, &b);

    return 0;
}