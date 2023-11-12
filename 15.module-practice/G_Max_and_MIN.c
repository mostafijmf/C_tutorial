#include <stdio.h>

void func(int arr[], int n)
{
    int min = arr[0], max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i]) min = arr[i];
        else if (max < arr[i]) max=arr[i];      
    }
    printf("%d %d", min, max);
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
    func(arr, n);

    return 0;
}