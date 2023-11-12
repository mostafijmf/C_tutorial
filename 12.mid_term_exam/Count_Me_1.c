#include <stdio.h>

int main()
{
    int nb;
    scanf("%d", &nb);
    int arr[nb];
    for (int i = 0; i < nb; i++)
    {
        scanf("%d", &arr[i]);
    }

    int a = 0, b = 0;
    for (int i = 0; i < nb; i++)
    {
        if (arr[i] % 2 == 0)
        {
            a++;
        }
        else if (arr[i] % 3 == 0)
        {
            b++;
        }
    }
    printf("%d %d", a, b);

    return 0;
}