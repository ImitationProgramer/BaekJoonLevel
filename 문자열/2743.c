#include <stdio.h>

int main()
{
    char word[101];
    scanf("%s", word);
    int cnt = 0;
    for (int i = 0; word[i] != '\0'; i++)
        cnt++;
    printf("%d", cnt);
    return 0;
}