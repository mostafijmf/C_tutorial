#include <stdio.h>

int length(char arr[], int i)
{
    if (arr[i] == '\0')
        return 0;
    int l = length(arr, i + 1);
    return l + 1;
}

int main()
{
    char str[1001] = "Hello";
    int len = length(str, 0);
    printf("%d", len);
    return 0;
}