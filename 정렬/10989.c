#include <stdio.h>

int main()
{
    int N;
    int num;
    int count[10001] = {
        0,
    };
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &num);
        count[num]++;
    }
    for (int i = 0; i < 10001; i++)
        for (int j = 0; j < count[i]; j++)
            printf("%d\n", i);
    return 0;
}