#include <stdio.h>

int main()
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    int result1 = (A + B) % C;
    int result2 = ((A % C) + (B % C)) % C;
    int result3 = (A * B) % C;
    int result4 = ((A % C) * (B % C)) % C;
    printf("%d\n%d\n%d\n%d", result1, result2, result3, result4);
    return 0;
}