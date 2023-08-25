#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000001];
    int i = 0, count = 0, len;

    scanf("%[^\n]", str);
    len = strlen(str);
    if (len == 1)
    {
        if (str[i] == ' ')
        {
            printf("0\n");
            return 0;
        }
    }
    for (i = 1; i < len - 1; i++)
    {
        if (str[i] == ' ')
            count++;
    }
    printf("%d", count + 1);
    return 0;
}