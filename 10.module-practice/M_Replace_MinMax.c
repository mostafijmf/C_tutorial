#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    
    long long int min = arr[0], max = 0;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] > max) max = arr[i]; 
        else if (arr[i] < min) min = arr[i]; 
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == max) printf("%lld ", min); 
        else if (arr[i] == min) printf("%lld ", max); 
        else printf("%lld ", arr[i]);
    }

    return 0;
}