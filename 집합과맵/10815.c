#include <stdio.h>
#include <stdlib.h>

// 대소비교 함수
int cmp(const int *a, const int *b)
{
    return *(int *)a > *(int *)b;
}

// 이진검색 함수
int search(int arr[], int n, int s)
{ // arr : 검색 대상 배열, n : 배열 요소 수, s : 검색값
    int mid, left = 0, right = n - 1;
    while (right >= left)
    {
        mid = (left + right) / 2;
        if (s == arr[mid])
            return 1;
        if (s < arr[mid])
            right = mid - 1;
        else
            left = mid + 1;
    }
    return 0;
}

int main(void)
{
    int n, m, s;

    scanf("%d", &n);
    int *arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    qsort(arr, n, sizeof(int), cmp);

    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &s);
        printf("%d ", search(arr, n, s));
    }

    free(arr);

    return 0;
}