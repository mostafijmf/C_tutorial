#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    scanf("%s", s);
    int c[26] = {0};
    for (int i = 0; i < strlen(s); i++)
    {
        int value = s[i] - 'a';
        c[value]++;
    }
    for (int i = 0; i < strlen(s); i++)
    {
        int value = s[i] - 97;
        if (c[value] != 0)
        {
            printf("%c - %d\n", value + 'a', c[value]);
        }
        c[value] = 0;
    }

    return 0;
}