#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int c[10] = {0};
    for (int i = 0; i < n; i++)
    {
        c[arr[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d - %d\n", i, c[i]);
    }

    return 0;
}