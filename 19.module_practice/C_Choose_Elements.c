#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[i] > arr[j])
            {
                long long int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    long long int ans = 0;
    for (int i = 0; i < k; i++)
    {
        if (arr[i] > 0) ans += arr[i];
    }
    printf("%lld ", ans);

    return 0;
}