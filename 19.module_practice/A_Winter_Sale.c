#include <stdio.h>

int main()
{
    float d, p;
    scanf("%f %f", &d, &p);
    float div = d / 100;
    float original_price = p / (1 - div);
    printf("%0.2f", original_price);
    return 0;
}