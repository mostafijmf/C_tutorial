#include <stdio.h>

void func(long long int arr[], int n)
{
    if (n % 2 == 0)
    {
        printf("%lld ", arr[n]);
    }
    if (n == 0) return;
    func(arr, n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    func(arr, n - 1);
    return 0;
}