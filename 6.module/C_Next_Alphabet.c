#include <stdio.h>

int main()
{
    // Given a lowercase alphabet character. You have to print the next character in the alphabet.
    // <-- Input -->
    // Only one line containing a lowercase English letter C.
    // <-- Output -->
    // Print the next letter to C
    //  in the alphabet.

    char c;
    scanf("%c", &c);
    if (c == 'Z' || c == 'z')
    {
        printf("%c", c - 25);
    }
    else
    {
        printf("%c", c + 1);
    }

    return 0;
}