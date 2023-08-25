#include <stdio.h>

int main()
{
    int N[6], sum = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &N[i]);
        sum += N[i];
    }
    int temp = N[0];
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (N[i] > N[j])
            {
                temp = N[j];
                N[j] = N[i];
                N[i] = temp;
            }
        }
    }
    printf("%d\n%d", sum / 5, N[2]);
    return 0;
}