#include <stdio.h>

long long int func(long long int arr[], int n, long long int sum)
{
    if (n < 0) return sum;
    func(arr, n - 1, sum + arr[n]);
}

int main()
{
    int n;
    scanf("%d", &n);
    long long int arr[n];
    for (int i = 0; i < n; i++) scanf("%lld", &arr[i]);
    long long int ans = func(arr, n-1, 0);
    printf("%lld", ans);

    return 0;
}