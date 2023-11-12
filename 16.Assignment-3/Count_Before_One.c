#include <stdio.h>

int count_before_one(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1) break;
        else ans++;
    }
    return ans;
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
    int ans = count_before_one(arr, n);
    printf("%d", ans);

    return 0;
}