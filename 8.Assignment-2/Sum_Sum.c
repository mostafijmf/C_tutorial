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

    long long int pSum = 0, nSum = 0;
    for (int i = 0; i < num; i++)
    {
        if (arr[i] > 0) pSum += arr[i];
        else nSum += arr[i];
    }
    printf("%lld %lld", pSum, nSum);

    return 0;
}