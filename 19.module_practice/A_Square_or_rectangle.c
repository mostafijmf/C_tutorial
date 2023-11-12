#include <stdio.h>

int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        int w,l;
        scanf("%d %d", &w, &l);
        if (w == l) printf("Square\n");
        else printf("Rectangle\n");
        
    }

    return 0;
}