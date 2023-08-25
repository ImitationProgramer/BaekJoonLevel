#include <stdio.h>

int main()
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    if (B + C <= A || C + A <= B || A + B <= C)
    {
        if (B + C <= A)
            A = B + C - 1;
        else if (C + A <= B)
            B = A + C - 1;
        else if (A + B <= C)
            C = A + B - 1;
    }
    printf("%d", A + B + C);
    return 0;
}