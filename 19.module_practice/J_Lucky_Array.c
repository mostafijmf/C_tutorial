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

    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i]) min = arr[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == min) ans++;
    }

    if (ans % 2 == 1) printf("Lucky");
    else printf("Unlucky");

    return 0;
}