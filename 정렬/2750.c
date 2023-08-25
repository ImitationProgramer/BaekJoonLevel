#include <stdio.h>

int main()
{
    int C, N[1001] = {
               0,
           };
    scanf("%d", &C);
    for (int i = 0; i < C; i++)
        scanf("%d", &N[i]);
    int temp = N[0];
    for (int i = 0; i < C; i++)
    {
        for (int j = i + 1; j < C; j++)
        {
            if (N[i] > N[j])
            {
                temp = N[j];
                N[j] = N[i];
                N[i] = temp;
            }
        }
    }
    for (int i = 0; i < C; i++)
        printf("%d\n", N[i]);
    return 0;
}