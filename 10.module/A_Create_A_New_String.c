#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001], t[1001];
    scanf("%s %s", &s, &t);
    int ls = strlen(s);
    int lt = strlen(t);
    printf("%d %d\n", ls, lt);
    printf("%s %s", s, t);
    return 0;
}