#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int i = 2;
    do
    {
        if (N % i == 0)
        {
            printf("%d\n", i);
            N /= i;
            i = 2;
        }
        else
            i++;
    } while (N >= i);
}