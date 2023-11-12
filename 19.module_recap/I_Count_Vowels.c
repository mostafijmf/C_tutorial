#include <stdio.h>
#include <string.h>

int main()
{
    char str[201], v[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    fgets(str, 201, stdin);
    int cnt = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (str[i] == v[j])
                cnt++;
        }
    }
    printf("%d", cnt);

    return 0;
}


// Maroon : M-3, L-3, XL- 3
// Black : M-3 bring sabr squar, L-3, XL- 3
// White : M-3 bring sabr squar, L-3, XL- 3