#include <stdio.h>
#include <string.h>
int main()
{
    char str[16];
    int count = 0;
    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++)
    {
        char alphabet = str[i];
        if (alphabet == 'A' || alphabet == 'B' || alphabet == 'C')
            count += 3;
        else if (alphabet == 'D' || alphabet == 'E' || alphabet == 'F')
            count += 4;
        else if (alphabet == 'G' || alphabet == 'H' || alphabet == 'I')
            count += 5;
        else if (alphabet == 'J' || alphabet == 'K' || alphabet == 'L')
            count += 6;
        else if (alphabet == 'M' || alphabet == 'N' || alphabet == 'O')
            count += 7;
        else if (alphabet == 'P' || alphabet == 'Q' || alphabet == 'R' || alphabet == 'S')
            count += 8;
        else if (alphabet == 'T' || alphabet == 'U' || alphabet == 'V')
            count += 9;
        else
            count += 10;
    }
    printf("%d", count);
    return 0;
}