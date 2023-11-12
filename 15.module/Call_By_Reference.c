#include <stdio.h>
int func(int *p)
{
    *p = 200;
    // printf("%p\n", p);
    // printf("%d\n", *p);
}
int main()
{
    int x = 100;
    func(&x);
    printf("%d\n", x);
    return 0;
}