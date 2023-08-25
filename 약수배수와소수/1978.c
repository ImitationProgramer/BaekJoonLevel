#include <stdio.h>

int main()
{
    int N, arr[100], cnt, resultcnt = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < N; i++)
    {
        cnt = 0;
        for (int j = 1; j <= arr[i]; j++)
            if (arr[i] % j == 0)
                cnt++;
        if (cnt == 2)
            resultcnt++;
    }
    printf("%d", resultcnt);
    return 0;
}