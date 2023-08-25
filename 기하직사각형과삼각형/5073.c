#include <stdio.h>

int main()
{
    while (1)
    {
        int A, B, C;
        scanf("%d %d %d", &A, &B, &C);
        if (A == 0 && B == 0 && C == 0)
            break;
        if (B + C <= A || C + A <= B || A + B <= C)
            printf("Invalid\n");
        else if (A == B && B == C && C == A)
            printf("Equilateral\n");
        else if (A == B || B == C || C == A)
            printf("Isosceles\n");
        else if (A != B && B != C && C != A)
            printf("Scalene\n");
    }
    return 0;
}