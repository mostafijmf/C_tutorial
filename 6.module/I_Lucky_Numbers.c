#include <stdio.h>

int main()
{
    // The Egyptian football team will be in Russia for the World Cup. Of course, they all would like to buy souvenirs for their families. Luckily, they met the king of souvenirs Matryoshka who is famous for his masterpiece Katryoshka. He makes it using different wooden pieces: eyes, mouths and bodies. He can form a nice Katryoshka using one of the following combinations:

    // 1. Two eyes and one body.
    // 2. Two eyes, one mouth, and one body.
    // 3. One eye, one mouth, and one body.
    // If the king has n eyes, m mouths and k bodies, what is the largest number of Katryoshkas he can make?
    // <-- Input -->
    // Only one line containing three numbers n, m and k (0≤n,m,k≤1018) – the number of eyes, mouths and bodies respectively.

    // <-- Output -->
    // Print the largest number of Katryoshkas he can make.

    int num;
    scanf("%d", &num);
    int a = num / 10;
    int b = num % 10;

    if ((b != 0 && a % b == 0) || (a != 0 && b % a == 0))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}