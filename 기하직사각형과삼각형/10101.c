#include <stdio.h>

int main()
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    if (A == 60 && B == 60 && C == 60)
        printf("Equilateral");
    else if ((A + B + C) == 180)
    {
        if ((A == B || B == C || A == C))
            printf("Isosceles");
        else
            printf("Scalene");
    }
    else
        printf("Error");
    return 0;
}