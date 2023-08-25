#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);
    int *arrX = (int *)malloc(sizeof(int) * N);
    int *arrY = (int *)malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++)
        scanf("%d %d", &arrX[i], &arrY[i]);
    int minX = arrX[0], maxX = arrX[0];
    for (int i = 0; i < N; i++)
    {
        if (minX > arrX[i])
            minX = arrX[i];
        if (maxX < arrX[i])
            maxX = arrX[i];
    }
    int minY = arrY[0], maxY = arrY[0];
    for (int i = 0; i < N; i++)
    {
        if (minY > arrY[i])
            minY = arrY[i];
        if (maxY < arrY[i])
            maxY = arrY[i];
    }
    printf("%d", (maxX - minX) * (maxY - minY));
    return 0;
}