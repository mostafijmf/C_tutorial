#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int c[m + 1];
    for (int i = 1; i <= m; i++)
    {
        c[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        c[arr[i]]++;
    }

    for (int i = 1; i <= m; i++)
    {
        if (c[i] != 0)
        {
            printf("%d\n", c[i]);
        }
    }

    return 0;
}