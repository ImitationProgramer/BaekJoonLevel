#include <stdio.h>

int main()
{
    int KING = 0, QUEEN = 0, LOOK = 0,
        BISHOP = 0, KNIGHT = 0, PONE = 0;
    int NKING, NQUEEN, NLOOK, NBISHOP, NKNIGHT, NPONE;
    scanf("%d %d %d %d %d %d", &KING, &QUEEN, &LOOK, &BISHOP, &KNIGHT, &PONE);
    if (KING != -1)
        NKING = 1 - KING;
    if (QUEEN != -1)
        NQUEEN = 1 - QUEEN;
    if (LOOK != -1)
        NLOOK = 2 - LOOK;
    if (BISHOP != -1)
        NBISHOP = 2 - BISHOP;
    if (KNIGHT != -1)
        NKNIGHT = 2 - KNIGHT;
    if (PONE != -1)
        NPONE = 8 - PONE;
    printf("%d %d %d %d %d %d", NKING, NQUEEN, NLOOK, NBISHOP, NKNIGHT, NPONE);
    return 0;
}