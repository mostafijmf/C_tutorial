#include <stdio.h>

int max(int arr[], int n, int ans)
{
    if (ans < arr[n]) ans = arr[n];
    if (n == 0) return ans;
    max(arr, n - 1, ans);
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int ans = max(arr, n - 1, arr[0]);
    printf("%d", ans);

    return 0;
}