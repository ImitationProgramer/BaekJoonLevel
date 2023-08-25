#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, M, sum = 0, max = 0;
    scanf("%d %d", &N, &M);
    int *arr = (int *)malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                sum = arr[i] + arr[j] + arr[k];
                if (sum > max && sum <= M)
                    max = sum;
            }
        }
    }
    printf("%d", max);
    return 0;
}