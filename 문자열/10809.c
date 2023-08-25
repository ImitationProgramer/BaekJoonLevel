#include <stdio.h>
#include <string.h>
int main()
{
    char S[100];
    int count[26];
    for (int i = 0; i < 26; i++)
        count[i] = -1;
    scanf("%s", S);
    char alphabetorder[26] = {'a', 'b', 'c', 'd', 'e',
                              'f', 'g', 'h', 'i', 'j',
                              'k', 'l', 'm', 'n', 'o',
                              'p', 'q', 'r', 's', 't',
                              'u', 'v', 'w', 'x', 'y', 'z'};

    int len = strlen(S);

    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (S[i] == alphabetorder[j])
            {
                if (count[j] != -1)
                    break;
                else
                {
                    count[j] = i;
                    break;
                }
            }
        }
    }
    for (int i = 0; i < 26; i++)
        printf("%d ", count[i]);

    return 0;
}