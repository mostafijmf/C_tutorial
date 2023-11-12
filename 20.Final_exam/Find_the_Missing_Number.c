#include <stdio.h>

int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        long long int total, first, second, third;
        scanf("%lld %lld %lld %lld", &total, &first, &second, &third);

        long long int mul = total / (first * second * third);
        if (total == (first * second * third * mul))
            printf("%lld\n", mul);
        else
            printf("-1\n");
    }

    return 0;
}