#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct
{
    int num, idx;
} point;
int compare(const void *a, const void *b)
{
    point o1 = *(point *)a;
    point o2 = *(point *)b;
    if (o1.num > o2.num)
        return 1;
    else if (o1.num < o2.num)
        return -1;
    else
        return 0;
}
int main()
{
    int N;
    scanf("%d", &N);
    point *arr = (point *)malloc(sizeof(point) * N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i].num);
        arr[i].idx = i;
    }
    qsort(arr, N, sizeof(point), compare);
    int *result = (int *)malloc(sizeof(int) * N);
    int cnt = -1, min = INT_MIN;
    for (int i = 0; i < N; i++)
    {
        if (arr[i].num != min)
        {
            min = arr[i].num;
            cnt++;
        }
        result[arr[i].idx] = cnt;
    }
    for (int i = 0; i < N; i++)
        printf("%d ", result[i]);
    return 0;
}