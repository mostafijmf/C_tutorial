#include <stdio.h>

void func(int n)
{
    printf("I love Recursion\n");
    if(n==1) return;
    func(n-1);
}

int main()
{
    int n;
    scanf("%d", &n);
    func(n);
    return 0;
}