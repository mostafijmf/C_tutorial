#include <stdio.h>

// void func(int a[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d\n", a[i]);
//     }
// }
void func(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
}

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    func(a, 5);
    return 0;
}