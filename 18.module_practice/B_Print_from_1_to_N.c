#include <stdio.h>

void func(int n, int i)
{
    printf("%d\n", i);
    if (n == i) return;
    func(n, i + 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    func(n, 1);
    return 0;
}