#include <stdio.h>

int main()
{
    int id[31] = {0};
    int n;
    for (int i = 0; i < 28; i++)
    {
        scanf("%d", &n);
        id[n - 1] = 1;
    }

    for (int i = 0; i < 30; i++)
    {
        if (id[i] == 0)
            printf("%d\n", i + 1);
    }
    return 0;
}