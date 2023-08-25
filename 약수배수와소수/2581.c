#include <stdio.h>

int main()
{
    int p = 0, M, N, cnt, arr[10000] = {
                              0,
                          };
    scanf("%d", &M);
    scanf("%d", &N);
    for (int i = M; i <= N; i++)
    {
        cnt = 0;
        for (int j = 1; j <= i; j++)
            if (i % j == 0)
                cnt++;
        if (cnt == 2)
            arr[p++] = i;
    }
    int min = arr[0], sum = 0;
    for (int i = 0; i < p; i++)
    {
        sum += arr[i];
        if (min >= arr[i])
            min = arr[i];
    }
    if (p == 0)
        printf("-1");
    else
        printf("%d\n%d", sum, min);
    return 0;
}