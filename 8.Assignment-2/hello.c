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

    long long int x, v;
    scanf("%lld %lld", &x, &v);
    arr[x] = v;

    for (int i = num - 1; i >= 0; i--)
    {
        printf("%lld ", arr[i]);
    }

    return 0;
}