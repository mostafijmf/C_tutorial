#include <stdio.h>
// <-- input -->
// row & col -> 4 3
// 1 2 3
// 4 5 6
// 7 8 9
// 10 11 12
// exact row -> 2

// <-- output -->
// 1 2 3 
// 4 5 6 
// 7 8 9 
// 10 11 12 
// 7 8 9

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // // <-- Print exact row -->
    // int e;
    // scanf("%d", &e);
    // for (int i = 0; i < col; i++)
    // {
    //     printf("%d ", arr[e][i]);
    // }

    return 0;
}