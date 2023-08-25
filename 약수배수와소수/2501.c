#include <stdio.h>

int main()
{
    int N, K, result = 0;
    scanf("%d %d", &N, &K);
    int f = 0;
    int cnt = 0;
    do
    {
        f++;
        if (N % f == 0)
        {
            cnt++;
            result = f;
            if (cnt == K)
                break;
        }
    } while (N > f);
    if (cnt < K)
        printf("0");
    else
        printf("%d", result);
    return 0;
}