#include <stdio.h>

int main()
{
    long long int num;
    scanf("%lld", &num);

    if (num > 0)
    {
        for (int i = 0; i < num; i++)
        {
            printf("%d ", i + 1);
        }
    }
    else
    {
        for (int i = num; i <= 0; i++)
        {
            printf("%d ", i);
        }
    }

    return 0;
}