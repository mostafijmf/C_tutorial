#include <stdio.h>
#include <string.h>

int main()
{
    char t[1001];
    // fgets(t,1001,stdin);
    scanf("%s", &t);
    int len = strlen(t);
    int is_palindrome = 1;
    int i = 0, j = len - 1;
    while (i < j)
    {
        if (t[i] != t[j])
        {
            is_palindrome = 0;
            break;
        }
        else
        {
            i++;
            j--;
        }
    }
    if (is_palindrome) printf("YES"); 
    else printf("NO"); 

    return 0;
}