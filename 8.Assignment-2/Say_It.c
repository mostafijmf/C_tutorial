#include <stdio.h>

int main()
{
    long long int num;
    scanf("%lld", &num);

    for (int i = 1; i <= num; i++)
    {
        printf("%d. I Want More Assignments\n", i);
    }

    return 0;
}