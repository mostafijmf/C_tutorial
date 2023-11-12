#include <stdio.h>

long long int factorial(int n, long long int x)
{
    if (n <= 0) return x;
    x = x * n;
    factorial(n - 1, x);
}

int main()
{
    int n;
    scanf("%d", &n);
    long long int ans = factorial(n, 1);
    printf("%lld", ans);
    return 0;
}