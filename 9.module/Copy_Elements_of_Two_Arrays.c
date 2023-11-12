#include <stdio.h>

int main()
{
    int n1;
    scanf("%d", &n1);
    int arr1[n1];
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    int n2;
    scanf("%d", &n2);
    int arr2[n2];
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int ans[n1 + n2];
    for (int i = 0; i < n1; i++)
    {
        ans[i] = arr1[i];
    }
    int i = n1;
    for (int j = 0; j < n2; j++)
    {
        ans[i] = arr2[j];
        i++;
    }

    for (int i = 0; i < n1 + n2; i++)
    {
        printf("%d ", ans[i]);
    }

    return 0;
}