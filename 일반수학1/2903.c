#include <stdio.h>
#include <math.h>

int main()
{
    int N;
    scanf("%d", &N);
    int pointcnt = 4;
    for (int i = 1; i <= N; i++)
        pointcnt += 5 + (8 * (pow(2, i - 1) - 1)) + 3 * pow(pow(2, i - 1) - 1, 2);
    if (N == 0)
        printf("4");
    printf("%d", pointcnt);
    return 0;
}