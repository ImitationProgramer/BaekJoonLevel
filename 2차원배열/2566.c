#include <stdio.h>

int main()
{
    int board[9][9] = {};
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
            scanf("%d", &board[i][j]);
    int saveRow = 0, saveColumn = 0, max = board[0][0];
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (max < board[i][j])
            {
                max = board[i][j];
                saveRow = i;
                saveColumn = j;
            }
        }
    }
    printf("%d\n", max);
    printf("%d %d", saveRow + 1, saveColumn + 1);
    return 0;
}