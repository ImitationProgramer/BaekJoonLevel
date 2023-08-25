#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return *((int *)a) - *((int *)b);
}
int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    int sum = A + B;

    int *arrA = malloc(sizeof(int) * sum);
    for (int i = 0; i < sum; i++)
        scanf("%d", &arrA[i]);
    qsort(arrA, sum, sizeof(int), compare);
    int cnt = 0;
    for (int i = 1; i < sum; i++)
        if (arrA[i] == arrA[i - 1])
            cnt += 2;
    printf("%d\n", sum - cnt);
    return 0;
}