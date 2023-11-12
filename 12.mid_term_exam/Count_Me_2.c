#include <stdio.h>
#include <string.h>

int main()
{
    char str[100001];
    scanf("%s", str);
    int len = strlen(str);

    int count = 0;
    char v[5] = {'a', 'e', 'i', 'o', 'u'};
    for (int i = 0; i < len; i++)
    {
        int cntV = 0;
        for (int j = 0; j < 5; j++)
        {
            if (str[i] == v[j]) cntV = 1;
        }

        if (cntV == 0) count++;
    }
    printf("%d", count);

    return 0;
}