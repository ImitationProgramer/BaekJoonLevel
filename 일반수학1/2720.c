#include <stdio.h>

int main()
{
    int T, C[501];
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
        scanf("%d", &C[i]);
    int Q[501], D[501], Ni[501], P[501];
    for (int i = 0; i < T; i++)
    {
        Q[i] = C[i] / 25;
        C[i] %= 25;
        D[i] = C[i] / 10;
        C[i] %= 10;
        Ni[i] = C[i] / 5;
        P[i] = C[i] % 5;
    }
    for (int i = 0; i < T; i++)
        printf("%d %d %d %d\n", Q[i], D[i], Ni[i], P[i]);
    return 0;
}