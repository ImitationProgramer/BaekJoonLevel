#include <stdio.h>

int main()
{
    int A, B, V;
    scanf("%d %d %d", &A, &B, &V);
    int daycnt = (V - B - 1) / (A - B) + 1;
    printf("%d", daycnt);
    return 0;
}