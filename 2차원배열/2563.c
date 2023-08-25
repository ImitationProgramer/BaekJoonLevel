#include <stdio.h>
#define MAX_SIZE 15

char board[5][MAX_SIZE] = {};
int main()
{
    for (int i = 0; i < 5; i++)
        scanf("%s", board[i]);
    for (int j = 0; j < MAX_SIZE; j++)
        for (int i = 0; i < 5; i++)
        {
            if (board[i][j] == NULL)
                continue;
            else
                printf("%c", board[i][j]);
        }

    return 0;
}