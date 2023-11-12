#include <stdio.h>

int main()
{
    // int n, s, k = 1;
    // scanf("%d", &n);
    // s = n - 1;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int m = 0; m < s; m++)
    //     {
    //         printf(" ");
    //     }
    //     for (int j = 1; j <= k; j++)
    //     {
    //         printf("*");
    //     }
    //     s--;
    //     k += 2;
    //     printf("\n");
    // }

    // // <-- Reverse way -->
    // int n, s=0, k = 1;
    // scanf("%d", &n);
    // k = n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int m = 0; m < s; m++)
    //     {
    //         printf(" ");
    //     }
    //     for (int j = 0; j <= k; j++)
    //     {
    //         printf("*");
    //     }
    //     s++;
    //     k -= 2;
    //     printf("\n");
    // }

    // <-- Diamond shape -->
    int n, s, k = 1;
    scanf("%d", &n);
    s = n - 1;
    for (int i = 0; i < (n * 2); i++)
    {
        for (int m = 0; m < s; m++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        if (i < n - 1)
        {
            s--;
            k += 2;
        }
        else
        {
            s++;
            k -= 2;
        }

        printf("\n");
    }

    return 0;
}