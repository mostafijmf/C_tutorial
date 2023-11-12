#include <stdio.h>

int main()
{
    // Given a number N. Print the digits of that number from right to left separated by space.
    // <-- Input -->
    // First line contains a number T (1 ≤ T ≤ 10) number of test cases.
    // Next T lines will contain a number N (0 ≤ N ≤ 109)
    // <-- Output -->
    // For each test case print a single line contains the digits of the number separated by space.

    int num;
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        int digit;
        scanf("%d", &digit);
        do
        {
            printf("%d ", digit % 10);
            digit = digit / 10;
        } while (digit != 0);
        printf("\n");
    }

    return 0;
}