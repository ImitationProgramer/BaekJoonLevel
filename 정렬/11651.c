#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int x, y;
} Point;

int compare(const void *a, const void *b)
{
    Point A = *(Point *)a; // Point형의 A로 입력받은 a를 사용할 수 있게함
    Point B = *(Point *)b;
    if (A.y > B.y) // 구조체의 y를 끌고와서 사용, 오름차순 정렬
        return 1;
    else if (A.y == B.y) // y 좌표가 같다면,
    {
        if (A.x > B.x) // x좌표 비교, 오름차순 정렬
            return 1;
        else
            return -1; // 그게 아니라면 -1반환
    }
    return -1; // A.x<B.x면 -1
}
int main()
{
    int N;
    scanf("%d", &N);
    Point *arr = (Point *)malloc(N * sizeof(Point)); // 동적배열 할당
    for (int i = 0; i < N; i++)
        scanf("%d %d", &arr[i].x, &arr[i].y); // 구조체 배열로 arr[0]의 x값,y값 각각 설정
    qsort(arr, N, sizeof(Point), compare);    // 퀵정렬 사용
    for (int i = 0; i < N; i++)
        printf("%d %d\n", arr[i].x, arr[i].y);
}