#include <stdio.h>

int main()
{
    int n, line = 6;
    scanf("%d", &n);
    for (int i = 3; i <= 21; i++)
    {
        if (i % 2 == 1) if(i <= n) line++;
    }

    int space1 = line - 1, star1 = 1;
    for (int i = 0; i < line; i++)
    {
        for (int j = 0; j < space1; j++) printf(" ");
        for (int j = 0; j < star1; j++) printf("*");
        space1--;
        star1 += 2;
        printf("\n");
        
    }

    int space2 = (star1 - n)/2;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j < space2; j++) printf(" ");
        for (int j = 0; j < n; j++) printf("*");        
        printf("\n");
    }    
    
    return 0;
}