#include <stdio.h>

int main()
{
    int N, k, score[1000];
    scanf("%d %d", &N, &k);
    for (int i = 0; i < N; i++)
        scanf("%d", &score[i]);
    int temp = score[0];
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (score[i] < score[j])
            {
                temp = score[i];
                score[i] = score[j];
                score[j] = temp;
            }
        }
    }
    printf("%d", score[k - 1]);
    return 0;
}