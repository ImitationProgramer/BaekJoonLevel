#include <stdio.h>
#include <string.h>

int main()
{
    int max, result = 0;
    char arr[1000000];
    int count[26] = {
        0,
    };
    int select = 0;
    scanf("%s", arr);
    int len = strlen(arr);
    for (int i = 'a'; i <= 'z'; i++)
        for (int j = 0; j < len; j++)
            if (i == arr[j])
                count[i - 'a']++;
    for (int i = 'A'; i <= 'Z'; i++)
        for (int j = 0; j < len; j++)
            if (i == arr[j])
                count[i - 'A']++;
    max = count[0];
    for (int i = 1; i < 26; i++)
    {
        if (max < count[i])
        {
            max = count[i];
            select = i;
        }
    }
    for (int i = 0; i < 26; i++)
        if (max == count[i])
            result++;
    if (result > 1)
        printf("?\n");
    else
        printf("%c", select + 'A');
    return 0;
}