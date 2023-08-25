#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sum = 0, max = 0;
    scanf("%d", &n);
    int *arr = (int *)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
        if (max < arr[i])
            max = arr[i];
    }
    printf("%f", ((double)sum / max * 100) / n);
    return 0;
}
/*
#include <stdio.h>
int main()
{
    int N, array[1000];
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
        scanf("%d ", &array[i]);
    int max = array[0];
    for (int j = 1; j < N; j++)
    {
        if (array[j] > max)
            max = array[j];
    }
    int sum = 0;
    for (int k = 0; k < N; k++)
        sum += array[k];
    double l = ((double)sum / max * 100.0) / N;

    printf("%f", l);
    return 0;
}
*/