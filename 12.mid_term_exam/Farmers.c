#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);

        int total = m1 + m2;
        int count = d * m1 / total;

        printf("%d\n", d - count);
    }

    return 0;
}