#include <stdio.h>

int main()
{
    int n, s, k = 1;
    scanf("%d", &n);
    s = n - 1;
    for (int i = 0; i < (n * 2); i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf(" ");
        }
        for (int f = 0; f < k; f++)
        {
            if (i % 2 == 0) printf("#");
            else printf("-");
        }

        if (i < (n - 1))
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