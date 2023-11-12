#include <stdio.h>
#include <string.h>

int is_palindrome(char str[])
{
    int len = strlen(str);
    int palindrome = 1;
    int i = 0, j = len - 1;
    while (i < j)
    {
        if (str[i] != str[j])
        {
            palindrome = 0;
            break;
        }
        else
        {
            i++;
            j--;
        }
    }
    return palindrome;
}

int main()
{
    char str[1001];
    scanf("%s", &str);
    int ans = is_palindrome(str);
    if (ans)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}