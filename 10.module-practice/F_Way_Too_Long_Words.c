#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    char arr[t][101];
    for (int i = 0; i < t; i++)
    {
        scanf("%s", &arr[i]);
    }

    for (int i = 0; i < t; i++)
    {
        int l = strlen(arr[i]);
        if (l <= 10)
        {
            printf("%s\n", arr[i]);
        }
        else
        {
            printf("%c%d%c\n", arr[i][0], l - 2, arr[i][l - 1]);
        }
    }

    return 0;
}