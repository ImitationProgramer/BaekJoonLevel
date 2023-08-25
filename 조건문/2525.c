#include <stdio.h>

int main()
{
    int a, b, c, carry;
    scanf("%d %d\n%d", &a, &b, &c);
    carry = (b + c) / 60;
    if (carry > 0)
    {
        a += carry;
        if (a >= 24)
            a -= 24;
        b = (b + c) % 60;
    }
    else
        b += c;
    printf("%d %d", a, b);
    return 0;
}