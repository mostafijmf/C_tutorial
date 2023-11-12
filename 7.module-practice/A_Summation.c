#include <stdio.h>

int main()
{
    // Given a number N and an array A of N numbers. Print the absolute summation of these numbers.
    // absolute value : means to remove any negative sign in front of a number .
    // EX : |-5| = 5 , |7| = 7
    // <-- Input -->
    // First line contains a number N (1 ≤ N ≤ 105) number of elements.
    // Second line contains N numbers (-109  ≤  Ai  ≤  109).
    // <-- Output -->
    // Print the absolute summation of these numbers.

    long long int num;
    scanf("%lld", &num);

    long long int arr[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%lld", &arr[i]);
    }

    long long int sum = 0;
    for (int i = 0; i < num; i++)
    {
        sum += arr[i];
    }

    if (sum < 0)
        printf("%lld", sum * -1);
    else
        printf("%lld", sum);

    return 0;
}