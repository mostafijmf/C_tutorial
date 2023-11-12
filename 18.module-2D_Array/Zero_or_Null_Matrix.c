#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int arr[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int mul = a * b;
    int count = 0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (arr[i][j] == 0) count++;
        }
    }
    if(mul == count) printf("Zero Matrix");
    else printf("Not Zero Matrix");

    return 0;
}