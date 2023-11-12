#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, x;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        scanf("%d", &x);
        int exist = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == x)
            {
                exist = 1;
            }
        }
        if (exist) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}