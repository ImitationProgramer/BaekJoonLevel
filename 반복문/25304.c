#include <stdio.h>

int main()
{
    int total, sum = 0, N;
    scanf("%d\n%d", &total, &N);
    for (int i = 0; i < N; i++)
    {
        int price = 0, cnt = 0;
        scanf("%d %d", &price, &cnt);
        sum += price * cnt;
    }
    if (sum == total)
        printf("Yes");
    else
        printf("No");
    return 0;
}