#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    for (int i = 1; i <= 12; i++)
    {
        int mul = i * num;
        printf("%d * %d = %d\n", num, i, mul);
    }

    return 0;
}