#include <stdio.h>

int main()
{
    // B. Even Numbers
    // Given a number N. Print all even numbers between 1 and N inclusive in separate lines.

    // int n;
    // scanf("%d", &n);
    // if (n == 1)
    // {
    //     printf("-1");
    // }
    // else
    // {
    //     for (int i = 1; i <= n; i++)
    //     {
    //         if (i % 2 == 0)
    //         {
    //             printf("%d\n", i);
    //         }
    //     }
    // }

    // ============================================================================================================

    // C. Even, Odd, Positive and Negative
    // Given N numbers. Count how many of these values are even, odd, positive and negative.
    // int n, v;
    // scanf("%d", &n);

    // int even = 0, odd = 0, pos = 0, neg = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     scanf("%d", &v);
    //     if (v % 2 == 0)
    //     {
    //         even++;
    //     }
    //     if (v % 2 == 1 || v % 2 == -1)
    //     {
    //         odd++;
    //     }
    //     if (v > 0)
    //     {
    //         pos++;
    //     }
    //     if (v < 0)
    //     {
    //         neg++;
    //     }
    // }
    // printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", even, odd, pos, neg);

    // ============================================================================================================

    // D. Fixed Password
    // Given multiple lines each line contains a number X which is a password. Print "Wrong" if the password is incorrect otherwise, print "Correct" and terminate the program.
    int pass;
    while (scanf("%d", &pass) != EOF)
    {
        if (pass == 1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}