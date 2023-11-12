#include <stdio.h>

int main()
{
    int n, spc, cnt=1;
    scanf("%d", &n);
    spc= n-1;
    for (int i = 0; i < n; i++)
    {
        for (int s = 0; s < spc; s++) printf(" ");
        for (int c = cnt; c > 0; c--) printf("%d", c);
        spc--;
        cnt++;
        printf("\n");
    }

    return 0;
}