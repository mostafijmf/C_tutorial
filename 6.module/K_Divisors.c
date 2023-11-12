#include <stdio.h>

int main()
{

    // Given a number N. Print all the divisors of N in ascending order.
    // <-- Input -->
    // Only one line containing a number N (1 ≤ N ≤ 104).
    // <-- Output -->
    // Print all positive divisors of N, one number per line.

    int num;
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}