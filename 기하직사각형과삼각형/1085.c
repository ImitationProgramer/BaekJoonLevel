#include <stdio.h>

int main()
{
    int x, y, w, h, result;
    scanf("%d %d %d %d", &x, &y, &w, &h);
    int A = w - x, B = h - y;
    if (x < A)
    {
        if (y < B)
        {
            if (x <= y)
                result = x;
            else
                result = y;
        }
        else
        {
            if (x <= B)
                result = x;
            else
                result = B;
        }
    }
    else
    {
        if (y < B)
        {
            if (A <= y)
                result = A;
            else
                result = y;
        }
        else
        {
            if (A <= B)
                result = A;
            else
                result = B;
        }
    }
    printf("%d", result);
    return 0;
}