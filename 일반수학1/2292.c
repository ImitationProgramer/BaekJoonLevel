#include <stdio.h>

int arithmetic(int x)
{
    int cellcnt = 1;
    for (int i = 1; i <= x - 1; i++)
        cellcnt += 6 * (i - 1);
    return cellcnt;
}

int main()
{
    int N, result = 0;
    scanf("%d", &N);
    int x = 1;
    while (N > arithmetic(x))
    {
        arithmetic(x);
        x++;
        result = x;
    }
    if (N == 1)
        printf("1");
    else
        printf("%d", result - 1);
    return 0;
}