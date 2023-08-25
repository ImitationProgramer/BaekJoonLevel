#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N, M;
    int i, j, k;
    scanf("%d %d", &N, &M);
    int *arr = (int *)calloc(N, sizeof(int));
    for (int q = 0; q < M; q++)
    {
        scanf("%d %d %d", &i, &j, &k);
        for (int p = i - 1; p < j; p++)
            arr[p] = k;
    }
    for (int p = 0; p < N; p++)
        printf("%d ", arr[p]);
    return 0;
}
/*
#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int i, j, k;
    int array[101] = {0};
    for (int a = 0; a < m; a++)
    {
        scanf("%d %d %d", &i, &j, &k);
        while (i <= j)
        {
            array[i - 1] = k;
            i++;
        }
    }
    for (int a = 0; a < n; a++)
        printf("%d ", array[a]);
    return 0;
}*/