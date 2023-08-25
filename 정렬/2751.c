// 퀵정렬(qsort) 사용하기
#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b)
{
    int num1 = *(int *)a;
    int num2 = *(int *)b;
    if (num1 < num2)
        return -1;
    if (num1 > num2)
        return 1;
    return 0;
}
int main()
{
    int N, arr[1000000];
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);
    qsort(arr, N, sizeof(int), compare); // (정렬할 배열, 요소개수, 요소크기, 비교함수)
    for (int i = 0; i < N; i++)
        printf("%d\n", arr[i]);
    return 0;
}