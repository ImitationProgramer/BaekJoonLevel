#include <stdio.h>

int main()
{
    int a, b, c, d, e, f, x, y;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    y = (c * d - f * a) / (b * d - a * e);
    x = (c * e - f * b) / (a * e - d * b);
    printf("%d %d", x, y);
    return 0;
}