#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);

    // <-- Option 1 -->
    // int j = strlen(a);
    // for (int i = 0; i <= strlen(b); i++)
    // {
    //     a[j] = b[i];
    //     j++;
    // }

    // <-- Option 2 -->
    strcat(a, b);

    printf("%s", a);

    return 0;
}