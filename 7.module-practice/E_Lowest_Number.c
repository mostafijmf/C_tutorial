#include <stdio.h>

int main()
{
    // Given a number N and an array A of N numbers. Print the lowest number and its position.
    // Note: if there are more than one answer print first one's position.
    // <-- Input -->
    // First line contains a number N (2 ≤ N ≤ 1000) number of elements.
    // Second line contains N numbers (-105  ≤  Ai  ≤  105).
    // <-- Output -->
    // Print the lowest number and its position (1-index).

    int n;
    scanf("%d", &n);
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    long long int ans = arr[0], pos = 1;
    for (int i = 0; i < n; i++)
    {
        if (ans > arr[i])
        {
            ans = arr[i];
            pos = i + 1;
        }
    }

    printf("%lld %lld", ans, pos);

    return 0;
}