#include <stdio.h>

int main()
{
    long long int e, m, b, ans = 0;
    scanf("%lld %lld %lld", &e, &m, &b);

    if (e <= m && e <= b)
        ans = e;
    else if (m <= e && m <= b)
        ans = m;
    else
        ans = b;

    e = e - ans;
    m = m - ans;
    b = b - ans;

    if (e / 2 < b)
    {
        ans += e / 2;
    }
    else
        ans += b;

    printf("%lld", ans);

    return 0;
}