#include <stdio.h>
#include <string.h>

int main()
{
    // char a[] = "String";
    // int s = sizeof(a);
    // printf("%d\n",s);
    // printf("%s",a);

    // // <-- Input string -->
    // char a[14];
    // scanf("%s", &a);
    // printf("%s",a);

    // // <-- Input string with gets() & fgets() -->
    // char a[14];
    // // gets(a);
    // fgets(a, 14, stdin);
    // printf("%s", a);

    // // <-- Find out string length -->
    // char a[100];
    // scanf("%s", &a);
    // int lng = 0, i = 0;
    // while (a[i] != '\0')
    // {
    //     lng++;
    //     i++;
    // }
    // printf("%d", lng);

    // <-- Find out string length with strlen -->
    char a[100];
    scanf("%s", &a);
    int lng = strlen(a);
    printf("%d", lng);
    return 0;
}