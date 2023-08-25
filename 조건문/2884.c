#include <stdio.h>

int main()
{
    int h, m;
    scanf("%d %d", &h, &m);
    if (m < 45)
    {
        m += 15;
        if (h < 1)
            h = 23;
        else
            h--;
    }
    else
        m -= 45;
    printf("%d %d", h, m);
    return 0;
}