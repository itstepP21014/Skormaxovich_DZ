#include <stdio.h>
#include <stdlib.h>
#define A 178
#define B 176
#define C 223
#define D 191
#define E 78
#define F 253
#define G 197
#define H 220
#define I 192
#define J 58
#define K 249
#define L 206
int main()
{

    int field[8][8];
    for (int y=0; y<8; y++)
    {
        for (int x=0; x<8; x++)
        {
            field[x][y]=0;
        }
    }
    for (int x=0; x<8; x++)
    {
        field[x][1]=A;
    }
    for (int x=0; x<8; x++)
    {
        field[x][6]=B;
    }
    field[0][0]=C;
    field[1][0]=D;
    field[2][0]=E;
    field[3][0]=F;
    field[4][0]=G;
    field[5][0]=E;
    field[6][0]=D;
    field[7][0]=C;

    field[0][7]=H;
    field[1][7]=I;
    field[2][7]=J;
    field[3][7]=K;
    field[4][7]=L;
    field[5][7]=J;
    field[6][7]=I;
    field[7][7]=H;

    for (int y=0; y<8; y++)
    {

        for (int x=0; x<8; x++)
        {

        }

    }

    for (int m=1; m<10000; m++)
    {

        printf ("x----------------->y\n  0 1 2 3 4 5 6 7  |");
        for (int y=0; y<8; y++)
        {
            printf("\n");
            printf ("%d ",y);
            for (int x=0; x<8; x++)
            {
                printf("%c ",field[x][y]);

            }
            printf ("%d| ",y);
        }
        printf ("\n  0 1 2 3 4 5 6 7 \\\/");

        if(m==700)
        {
            m=2;
        }
        int n,a,b;
        n=m%2;
        if (n==1)
        {
            printf("\n Player 1 ");
        }
        else
        {
            printf("\n Player 2 ");
        }
        int x1,y1,bank;
        printf("\n Enter x:");
        scanf("%d",&x1);
        printf("\n Enter y:");
        scanf("%d",&y1);

        if (field[x1][y1]==0 )
        {
            printf("\n Error");
            printf("\n Enter x:");
            scanf("%d",&x1);
            printf("\n Enter y:");
            scanf("%d",&y1);
        }

        if (n==1)
        {

            if (field[x1][y1]==A)
            {
                bank=field[x1][y1];

                int a,b=1;
                if(field[x1+1][y1+1]!=0 || field[x1+1][y1+1] == B)
                {
                    printf("attack right?:1-yes 2-no");
                    scanf("%d",&a);
                    switch(a)
                    {
                    case 1:
                        field[x1][y1]=0;
                        x1=x1+1;
                        y1=y1+1;
                        b=b-1;
                        break;
                    case 2:
                        break;
                    }
                    field[x1][y1]=bank;
                }
                if(field[x1-1][y1+1]!=0)
                {
                    printf("attack left?:1-yes 2-no");
                    scanf("%d",&a);
                    switch(a)
                    {
                    case 1:
                        field[x1][y1]=0;
                        x1=x1-1;
                        y1=y1+1;
                        b=b-1;
                        break;
                    case 2:
                        break;
                    }
                    field[x1][y1]=bank;

                }
                if(b==1)
                {
                    bank=field[x1][y1];
                    field[x1][y1+1]=bank;
                    field[x1][y1]=0;

                }
            }
            else
            {
                if(field[x1][y1]==C)
                {
                    bank=field[x1][y1];
                    field[x1][y1]=0;
                    printf("\nEnter 2 if down,8 if up,4 if left,6 if right:");
                    scanf("%d",&a);
                    printf("\nEnter stroke length:");
                    scanf("%d",&b);
                    switch(a)
                    {
                    case 2:
                        for (int i=0; i<b; i++)
                        {
                            y1=y1+1;

                            if(field[x1+1][y1+1]==H && field[x1+1][y1+1] ==B && field[x1][y1+1]==I && field[x1][y1+1]==J && field[x1][y1+1]==K)
                            {
                                i=b-2;
                            }
                        }
//y1=y1+b;
                        break;
                    case 8:
                        y1=y1-b;
                        break;
                    case 6:
                        x1=x1+b;
                        break;
                    case 4:
                        x1=x1-b;
                        break;
                    }
                    field[x1][y1]=bank;

                }

            }

            if(field[x1][y1]==E)
            {
                bank=field[x1][y1];
                field[x1][y1]=0;
                printf("\nEnter 1 if down-left,3 if down-right,9 if up-right,7 if up-left:");
                scanf("%d",&a);
                printf("\nEnter stroke length:");
                scanf("%d",&b);
                switch(a)
                {
                case 1:
                    y1=y1+b;
                    x1=x1-b;
                    break;
                case 3:
                    y1=y1+b;
                    x1=x1+b;
                    break;
                case 9:
                    y1=y1-b;
                    x1=x1+b;
                    break;
                case 7:
                    y1=y1-b;
                    x1=x1-b;
                    break;
                }
                field[x1][y1]=bank;

            }
            if(field[x1][y1]==F)
            {
                bank=field[x1][y1];
                field[x1][y1]=0;
                printf("\nEnter 1 if down-left,3 if down-right,9 if up-right,7 if up-left,2 if down,8 if up,4 if left,6 if right:");
                scanf("%d",&a);
                printf("\nEnter stroke length:");
                scanf("%d",&b);
                switch(a)
                {
                case 1:
                    y1=y1+b;
                    x1=x1-b;
                    break;
                case 3:
                    y1=y1+b;
                    x1=x1+b;
                    break;
                case 9:
                    y1=y1-b;
                    x1=x1+b;
                    break;
                case 7:
                    y1=y1-b;
                    x1=x1-b;
                    break;
                case 2:
                    y1=y1+b;
                    break;
                case 8:
                    y1=y1-b;
                    break;
                case 6:
                    x1=x1+b;
                    break;
                case 4:
                    x1=x1-b;
                    break;
                }
                field[x1][y1]=bank;

            }
            if(field[x1][y1]==G)
            {
                bank=field[x1][y1];
                field[x1][y1]=0;
                printf("\nEnter 1 if down-left,3 if down-right,9 if up-right,7 if up-left,2 if down,8 if up,4 if left,6 if right:");
                scanf("%d",&a);

                switch(a)
                {
                case 1:
                    y1=y1+1;
                    x1=x1-1;
                    break;
                case 3:
                    y1=y1+1;
                    x1=x1+1;
                    break;
                case 9:
                    y1=y1-1;
                    x1=x1+1;
                    break;
                case 7:
                    y1=y1-1;
                    x1=x1-1;
                    break;
                case 2:
                    y1=y1+1;
                    break;
                case 8:
                    y1=y1-1;
                    break;
                case 6:
                    x1=x1+1;
                    break;
                case 4:
                    x1=x1-1;
                    break;
                }
                field[x1][y1]=bank;

            }

        }
        if(n==0)
        {

            if (field[x1][y1]==B)
            {
                bank=field[x1][y1];

                int a,b=1;
                if(field[x1+1][y1-1]!=0)
                {
                    printf("attack right?:1-yes 2-no");
                    scanf("%d",&a);
                    switch(a)
                    {
                    case 1:
                        field[x1][y1]=0;
                        x1=x1+1;
                        y1=y1-1;
                        b=b-1;
                        break;
                    case 2:
                        break;
                    }
                    field[x1][y1]=bank;
                }
                if(field[x1-1][y1-1]!=0)
                {
                    printf("attack left?:1-yes 2-no");
                    scanf("%d",&a);
                    switch(a)
                    {
                    case 1:
                        field[x1][y1]=0;
                        x1=x1-1;
                        y1=y1-1;
                        b=b-1;
                        break;
                    case 2:
                        break;
                    }
                    field[x1][y1]=bank;
                }
                if(b==1)
                {
                    bank=field[x1][y1];
                    field[x1][y1-1]=bank;
                    field[x1][y1]=0;
                }
            }
            else
            {
                if(field[x1][y1]==H)
                {
                    bank=field[x1][y1];
                    field[x1][y1]=0;
                    printf("\nEnter 2 if down,8 if up,4 if left,6 if right:");
                    scanf("%d",&a);
                    printf("\nEnter stroke length:");
                    scanf("%d",&b);
                    switch(a)
                    {
                    case 2:
                        y1=y1+b;
                        break;
                    case 8:
                        y1=y1-b;
                        break;
                    case 6:
                        x1=x1+b;
                        break;
                    case 4:
                        x1=x1-b;
                        break;
                    }
                    field[x1][y1]=bank;

                }
                if(field[x1][y1]==J)
                {
                    bank=field[x1][y1];
                    field[x1][y1]=0;
                    printf("\nEnter 1 if down-left,3 if down-right,9 if up-right,7 if up-left:");
                    scanf("%d",&a);
                    printf("\nEnter stroke length:");
                    scanf("%d",&b);
                    switch(a)
                    {
                    case 1:
                        y1=y1+b;
                        x1=x1-b;
                        break;
                    case 3:
                        y1=y1+b;
                        x1=x1+b;
                        break;
                    case 9:
                        y1=y1-b;
                        x1=x1+b;
                        break;
                    case 7:
                        y1=y1-b;
                        x1=x1-b;
                        break;
                    }
                    field[x1][y1]=bank;

                }
                if(field[x1][y1]==K)
                {
                    bank=field[x1][y1];
                    field[x1][y1]=0;
                    printf("\nEnter 1 if down-left,3 if down-right,9 if up-right,7 if up-left,2 if down,8 if up,4 if left,6 if right:");
                    scanf("%d",&a);
                    printf("\nEnter stroke length:");
                    scanf("%d",&b);
                    switch(a)
                    {
                    case 1:
                        y1=y1+b;
                        x1=x1-b;
                        break;
                    case 3:
                        y1=y1+b;
                        x1=x1+b;
                        break;
                    case 9:
                        y1=y1-b;
                        x1=x1+b;
                        break;
                    case 7:
                        y1=y1-b;
                        x1=x1-b;
                        break;
                    case 2:
                        y1=y1+b;
                        break;
                    case 8:
                        y1=y1-b;
                        break;
                    case 6:
                        x1=x1+b;
                        break;
                    case 4:
                        x1=x1-b;
                        break;
                    }
                    field[x1][y1]=bank;

                }
                if(field[x1][y1]==L)
                {
                    bank=field[x1][y1];
                    field[x1][y1]=0;
                    printf("\nEnter 1 if down-left,3 if down-right,9 if up-right,7 if up-left,2 if down,8 if up,4 if left,6 if right:");
                    scanf("%d",&a);

                    switch(a)
                    {
                    case 1:
                        y1=y1+1;
                        x1=x1-1;
                        break;
                    case 3:
                        y1=y1+1;
                        x1=x1+1;
                        break;
                    case 9:
                        y1=y1-1;
                        x1=x1+1;
                        break;
                    case 7:
                        y1=y1-1;
                        x1=x1-1;
                        break;
                    case 2:
                        y1=y1+1;
                        break;
                    case 8:
                        y1=y1-1;
                        break;
                    case 6:
                        x1=x1+1;
                        break;
                    case 4:
                        x1=x1-1;
                        break;
                    }
                    field[x1][y1]=bank;

                }

            }
        }

        system("cls");
        printf ("x----------------->y\n 0 1 2 3 4 5 6 7 |");
        for (int y=0; y<8; y++)
        {
            printf("\n");
            printf ("%d ",y);
            for (int x=0; x<8; x++)
            {
                printf("%c ",field[x][y]);

            }
            printf ("%d| ",y);
        }
        printf ("\n 0 1 2 3 4 5 6 7 \\\/");
       /* if (field[x1][y1]==178)
        {
            bank=field[x1][y1];
            field[x1][y1+1]=bank;
            field[x1][y1]=0;
        }*/
        if (n==1)
        {
            printf("\n Player 1 ");
        }
        else
        {
            printf("\n Player 2 ");
        }
        printf("\nFigur : %c",bank);

        system("cls");
    }
    return 0;
}
