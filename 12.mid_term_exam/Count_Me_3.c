#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int s = 0; s < t; s++)
    {
        char s[10001];
        scanf("%s", s);
        int cap = 0, sm = 0, dig = 0;
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z') cap++;
            else if (s[i] >= 'a' && s[i] <= 'z') sm++;
            else if (s[i] >= '0' && s[i] <= '9') dig++;
        }
        printf("%d %d %d\n", cap, sm, dig);
    }

    return 0;
}