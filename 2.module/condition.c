#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n >= 10)
    {
        printf("It's Okay: %d", n);
    }
    else
    {
        printf("It's not okay: %d", n);
    };
    
    return 0;
}