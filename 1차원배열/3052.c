#include <stdio.h>

int main()
{
    int n, left[43] = {0};
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &n);
        left[n % 42] = 1;
    }
    int cnt = 0;
    for (int i = 0; i < 42; i++)
        if (left[i] == 1)
            cnt++;
    printf("%d", cnt);
    return 0;
}