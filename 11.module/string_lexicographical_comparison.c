#include <stdio.h>
#include <string.h>

int main()
{
    char a[101], b[101];
    scanf("%s %s", a, b);

    // // <-- Option 1 -->
    // int i = 0;
    // while (1)
    // {
    //     if (a[i] == '\0' && b[i] == '\0')
    //     {
    //         printf("Same\n");
    //         break;
    //     }
    //     else if (a[i] == '\0')
    //     {
    //         printf("A choto\n");
    //         break;
    //     }
    //     else if (b[i] == '\0')
    //     {
    //         printf("B choto\n");
    //         break;
    //     }

    //     if (a[i] == b[i])
    //     {
    //         i++;
    //     }
    //     else if (a[i] < b[i])
    //     {
    //         printf("A choto\n");
    //         break;
    //     }
    //     else
    //     {
    //         printf("B choto\n");
    //         break;
    //     }
    // }

    // <-- Option 2 -->
    int ans = strcmp(a, b);
    if (ans < 0)
    {
        printf("A is smaller\n");
    }
    else if (ans > 0)
    {
        printf("b is smaller\n");
    }
    else
    {
        printf("Same\n");
    }

    return 0;
}