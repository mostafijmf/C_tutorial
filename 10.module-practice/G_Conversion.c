#include <stdio.h>
#include <string.h>

int main()
{
    char t[100001];
    fgets(t, 100001, stdin);
    for (int i = 0; t[i] != '\0'; i++)
    {
        if (t[i] >= 'A' && t[i] <= 'Z')
        {
            t[i] += 32;
        }
        else if (t[i] >= 'a' && t[i] <= 'z')
        {
            t[i] -= 32;
        }
        else if (t[i] == ',')
        {
            t[i] = ' ';
        }
        else
        {
            t[i] = t[i];
        }
    }
    printf("%s", t);

    return 0;
}