#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x;
    scanf("%d %d", &n, &x);
    int *array = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &array[i]);
    for (int i = 0; i < n; i++)
    {
        if (x > array[i])
            printf("%d ", array[i]);
    }
    return 0;
}
// #include <stdio.h>
// int main()
// {
//     int i, N, X, array[10000];
//     scanf("%d %d", &N, &X);
//     for (i = 0; i < N; i++)
//         scanf("%d \n", &array[i]);

//     for (i = 0; i < N; i++)
//     {
//         if (X > array[i])
//             printf("%d ", array[i]);
//     }
//     return 0;
// }