#include <stdio.h>

int main()
{
    int n, x;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);

    int ans = 0;
    for (int i = 0; i < (n - 1); i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                ans = 1;
            }
        }
    }
    if (ans)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}