#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, a, b;
    scanf("%d %d", &n, &m);
    int *arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        arr[i] = i + 1;
    for (int i = 0; i < m; i++)
    {
        scanf("%d %d", &a, &b);
        for (int j = 0; j < (b - a) / 2 + 1; j++)
        {
            int temp = arr[a + j - 1];
            arr[a + j - 1] = arr[b - 1 - j];
            arr[b - j - 1] = temp;
        }
    }
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
/*
#include <stdio.h>
int main()
{
    int i, j, n, m, array[100];
    scanf("%d %d", &n, &m);
    for (int k = 0; k < n; k++)
        array[k] = k + 1;
    for (int l = 0; l < m; l++)
    {
        scanf("%d %d", &i, &j);
        int r = (j - i + 1) / 2;
        for (int p = 0; p < r; p++, i++, j--)
        {
            int temp = 0;
            temp = array[i - 1];
            array[i - 1] = array[j - 1];
            array[j - 1] = temp;
        }
    }

    for (int q = 0; q < n; q++)
        printf("%d ", array[q]);
    return 0;
}*/