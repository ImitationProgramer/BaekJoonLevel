#include <stdio.h>

int main()
{
    int a1, a0, c, n0;
    scanf("%d %d %d %d", &a1, &a0, &c, &n0);
    if (n0 * a1 + a0 <= c * n0 && a1 <= c)
        printf("1");
    else
        printf("0");
    return 0;
}