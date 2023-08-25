#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    char alphabet[1000];
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%s", alphabet);
        printf("%c%c\n", alphabet[0], alphabet[strlen(alphabet) - 1]);
    }
    return 0;
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    char alphabet[1000];
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%s", alphabet);
        int n = strlen(alphabet);
        printf("%c%c\n", alphabet[0], alphabet[n - 1]);
    }
    return 0;
}*/