#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);
    int *num = (int *)malloc(sizeof(int) * N);
    scanf("%d", &num[0]);
    int max = num[0];
    int min = num[0];
    for (int i = 1; i < N; i++)
    {
        scanf("%d", &num[i]);
        if (max < num[i])
            max = num[i];
        if (min > num[i])
            min = num[i];
    }
    printf("%d %d", min, max);
    return 0;
}
/*#include <stdio.h>
int main()
{
    int N, array[1000000];

    scanf("%d", &N);
    for (int i = 0; i < N; i++)
        scanf("%d", &array[i]);
    int max = array[0];
    int min = array[0];
    for (int j = 0; j < N; j++)
    {

        if (array[j] > max)
            max = array[j];
        if (array[j] < min)
            min = array[j];
    }
    printf("%d %d", min, max);
    return 0;
}*/