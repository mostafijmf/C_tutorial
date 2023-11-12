#include <stdio.h>

void rec(int i)
{
    if (i == 6) return;
    rec(i + 1);
    printf("%d\n", i);
}

int main()
{
    rec(1);
    return 0;
}