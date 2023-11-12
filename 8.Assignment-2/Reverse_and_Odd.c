#include <stdio.h>

int main()
{
    long long int num;
    scanf("%lld", &num);

    long long int arr[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%lld", &arr[i]);
    }

    for (int i = num - 1; i >= 0; i--)
    {
        if (i % 2 == 1)
        {
            printf("%lld ", arr[i]);
        }
    }

    return 0;
}