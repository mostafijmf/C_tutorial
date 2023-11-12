#include <stdio.h>

int main()
{
    int s;
    scanf("%d", &s);
    int arr[s];
    for (int i = 0; i < s; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for (int i = 0; i < s; i++)
    {
        sum += arr[i];
    }
    printf("%d", sum);
    
    return 0;
}