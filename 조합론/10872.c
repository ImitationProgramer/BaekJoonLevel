#include <stdio.h>

int fact(int n);
int main()
{
    int N;
    scanf("%d", &N);
    printf("%d", fact(N));
    return 0;
}

int fact(int n)
{
    if (n <= 1)
        return 1;
    else
    {
        n = n * fact(n - 1);
        return n;
    }
}