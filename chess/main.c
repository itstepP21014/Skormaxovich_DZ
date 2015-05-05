#include <stdio.h>
#include <stdlib.h>

int main()
{

    int field[8][8];
    for (int y=0;y<8;y++)
    {
        for (int x=0;x<8;x++)
        {
            field[x][y]=0;
        }
    }
   for (int x=0;x<8;x++)
    {
       field[x][1]=178;
    }
     for (int x=0;x<8;x++)
    {
       field[x][6]=176;
    }
    field[0][0]=223;
    field[1][0]=191;
    field[2][0]=78;
    field[3][0]=253;
    field[4][0]=197;
    field[5][0]=78;
    field[6][0]=191;
    field[7][0]=223;

    field[0][7]=220;
    field[1][7]=192;
    field[2][7]=58;
    field[3][7]=249;
    field[4][7]=206;
    field[5][7]=58;
    field[6][7]=192;
    field[7][7]=220;
    for (int y=0;y<8;y++)
    {
        printf("\n");
        for (int x=0;x<8;x++)
        {
            printf("%c ",field[x][y]);
        }
    }

    return 0;
}
