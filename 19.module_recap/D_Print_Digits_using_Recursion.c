#include <stdio.h>

void rec(int d)
{
    if (d == 0) return;
    int x = d % 10;
    rec(d / 10);
    printf("%d ", x);
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int d;
        scanf("%d", &d);
        rec(d);
        if(d==0) printf("0");
        printf("\n");
    }

    return 0;
}