#include <stdio.h>

int func(long long int arr[], int c)
{
    for (int i = 0; i < c - 1; i++)
    {
        for (int j = 1; j < c; j++)
        {
            if (arr[i] > arr[j])
            {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    for (int i = 0; i < c; i++)
    {
        printf("%d\n", arr[i]);
    }
}

int main()
{
    long long int a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);

    long long int arr[3] = {a, b, c};

    func(arr, 3);
    printf("\n%lld\n%lld\n%lld", a, b, c);

    return 0;
}