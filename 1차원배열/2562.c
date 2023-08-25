#include <stdio.h>

int main()
{
    int num[10];
    int max = 0, remember = 0;
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &num[i]);
        if (max < num[i])
        {
            max = num[i];
            remember = i;
        }
    }
    printf("%d\n%d", max, remember + 1);
}