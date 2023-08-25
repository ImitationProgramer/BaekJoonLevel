#include <stdio.h>

int white_board[100][100];
int main()
{
    int ColorPaperCnt = 0, Row = 0, Column = 0, size = 0;
    scanf("%d", &ColorPaperCnt);
    for (int i = 0; i < ColorPaperCnt; i++)
    {
        scanf("%d %d", &Row, &Column);
        for (int j = 0; j < 10; j++)
            for (int k = 0; k < 10; k++)
                white_board[Row + j][Column + k] = 1;
    }
    for (int i = 0; i < 100; i++)
        for (int j = 0; j < 100; j++)
            size += white_board[i][j];
    printf("%d", size);
    return 0;
}