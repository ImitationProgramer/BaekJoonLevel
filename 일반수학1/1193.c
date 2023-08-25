#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int k = 1;
    while (1)
    {
        if ((k - 1) * k / 2 < N && N <= k * (k + 1) / 2)
            break;
        k++;
    }

    if (k % 2 != 0) // 홀수일때
    {
        int a = k * (k + 1) / 2;
        printf("%d", a - N + 1);
        printf("/");
        printf("%d", k - (a - N));
    }
    else
    {
        int a = k * (k + 1) / 2;
        printf("%d", k - (a - N));
        printf("/");
        printf("%d", a - N + 1);
    }
    return 0;
}