#include <stdio.h>

int main()
{
    int n, s, k = 1;
    scanf("%d", &n);
    s = n - 1;
    for (int i = 0; i < (n * 2); i++)
    {
        if (i == n)
        {
            s++;
            k -= 2;
        }
        
        for (int j = 0; j < s; j++)
        {
            printf(" ");
        }
        for (int f = 0; f < k; f++)
        {
            printf("*");
        }

        if (i < n)
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