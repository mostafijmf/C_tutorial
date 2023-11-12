#include <stdio.h>

void func(int n)
{
    if (n == 1)
    {
        printf("%d", n);
        return;
    }
    printf("%d ", n);
    func(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    func(n);
    return 0;
}