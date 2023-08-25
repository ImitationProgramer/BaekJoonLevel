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
        int temp = arr[b - 1];
        arr[b - 1] = arr[a - 1];
        arr[a - 1] = temp;
    }
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
/*#include <stdio.h>
int main()
{
    int n = 0, m = 0;
    scanf("%d %d", &n, &m);
    int i = 0, j = 0, temp = 0;
    int array[101];
    for (int k = 0; k < n; k++)
        array[k] = k + 1;
    for (int a = 0; a < m; a++)
    {
        scanf("%d %d", &i, &j);
        temp = array[j - 1];
        array[j - 1] = array[i - 1];
        array[i - 1] = temp;
    }
    for (int b = 0; b < n; b++)
        printf("%d ", array[b]);
    return 0;
}*/