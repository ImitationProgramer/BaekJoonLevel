#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    char num[N];
    scanf("%s", num);
    int sum = 0;
    for (int i = 0; i < N; i++)
        sum += num[i] - '0';
    printf("%d", sum);
    return 0;
}