#include <stdio.h>

int main()
{
    int i, j, linenum;
    scanf("%d", &linenum);
    for (i = 1; i < linenum + 1; i++)
    {
        for (j = 0; j < linenum - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j < i + 1; j++)
        {
            printf("*");
        }
        for (j = 0; j < i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = 1; i < linenum + 1; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (j = 0; j < linenum - i; j++)
        {
            printf("*");
        }
        for (j = 1; j < linenum - i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}