#include <stdio.h>

int main()
{
    int test_case;
    scanf("%d", &test_case);
    for (int i = 0; i < test_case; i++)
    {
        int num;
        scanf("%d", &num);
        char str[num];
        scanf("%s", &str);

        int t = 0, p = 0;
        for (int j = 0; j < num; j++)
        {
            if (str[j] == 'T') t++;
            if (str[j] == 'P') p++;
        }
        if (t > p) printf("Tiger\n");
        else if(t<p) printf("Pathaan\n");
        else printf("Draw\n");
    }

    return 0;
}