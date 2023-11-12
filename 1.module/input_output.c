#include <stdio.h>
int main()
{
    // int num;
    // float f;
    // char c;
    // scanf("%d %f %c", &num, &f, &c);
    // printf("%d %0.3f %c", num, f, c);

    int a, b;
    char c;
    scanf("%d%c %d%c", &a, &c, &b, &c);
    printf("%d%% %d%%", a, b);
    return 0;
}