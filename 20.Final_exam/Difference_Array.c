#include <stdio.h>
#include <stdlib.h>

int main()
{
    int test_case;
    scanf("%d", &test_case);
    for (int i = 0; i < test_case; i++)
    {
        // <-- take input -->
        int num;
        scanf("%d", &num);
        int arr1[num];
        for (int j = 0; j < num; j++)
        {
            scanf("%d", &arr1[j]);
        }

        // <-- copy array 1 to 2 -->
        int arr2[num];
        for (int j = 0; j < num; j++) arr2[j] = arr1[j];

        // <-- sort arr2 in ascending order -->
        for (int j = 0; j < num - 1; j++)
        {
            for (int s = j + 1; s < num; s++)
            {
                if (arr2[j] > arr2[s])
                {
                    int tmp = arr2[j];
                    arr2[j] = arr2[s];
                    arr2[s] = tmp;
                }
            }
        }

        // <-- print the ans: arr1 - arr2 = ans -->
        for (int j = 0; j < num; j++)
        {
            printf("%d ", abs(arr1[j] - arr2[j]));
        }
        printf("\n");
    }

    return 0;
}