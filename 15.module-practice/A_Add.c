#include <stdio.h>

int func(int a, int b)
{
    return a + b;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = func(a, b);
    printf("%d", ans);
    return 0;
}