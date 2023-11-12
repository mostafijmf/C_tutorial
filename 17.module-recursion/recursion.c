#include <stdio.h>

// // <-- Count -->
// void rec(int i)
// {
//     printf("%d\n", i);
//     if(i == 5) return;
//     rec(i+1);
// }

// <-- Reverse Count -->
void rec(int i)
{
    printf("%d\n", i);
    if(i == 1) return;
    rec(i-1);
}

int main()
{
    // rec(1);
    rec(5);
    return 0;
}