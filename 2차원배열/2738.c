#include <stdio.h>

int main()
{
    int N, M;
    int A[100][100], B[100][100], sum[100][100];
    scanf("%d %d", &N, &M);
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            scanf("%d", &A[i][j]);
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            scanf("%d", &B[i][j]);
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            sum[i][j] = A[i][j] + B[i][j];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }
    return 0;
}