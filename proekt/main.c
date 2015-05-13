#include <stdio.h>
#include <stdlib.h>
#define A 57
#define B 42
#define C 48
int main()
{

    int field[8][8],score_white=0,score_black=0,number_white=0,number_black=0;
    for (int y=0; y<8; y++)
    {
        for (int x=0; x<8; x++)
        {
            field[x][y]=C;
        }
    }
    for(int y=0; y<2; y++)
    {
        for (int x=0; x<8; x++)
        {
            field[x][y]=A;
        }
    }
    for (int y=6; y<8; y++)
    {
        for (int x=0; x<8; x++)
        {
            field[x][y]=B;
        }
    }



    for (int m=1; m<10000; m++)
    {
        for(int q=0; q<8; q++)
        {
            for(int w=0; w<8; w++)
            {
                int number_white=0,number_black=0;
                if (field[q][w]==A)
                {

                    number_white=number_white+1;
                }
                if (field[q][w]==B)
                {

                    number_black=number_black+1;
                }
            }
        }
        if (number_white==0 && number_black==0)
        {
            if(score_white>score_black)
            {
                printf("\nPlayer 1 win!");
                exit(1);
            }
            if(score_black>score_white)
            {


                printf("\nPlayer 2 win!");
                exit(1);
            }
        }

        system("clear");
        printf ("x----------------->y   player 1:%d,player 2:%d\n  0 1 2 3 4 5 6 7  |",score_white,score_black);
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

        printf ("\n  0 1 2 3 4 5 6 7 \\/");

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

if (field[x1][y1]==C )
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
if(field[x1+1][y1+1]==B)
{
printf("attack right?:1-yes 2-no");
scanf("%d",&a);
switch(a)
{
case 1:
field[x1][y1]=C;
x1=x1+1;
y1=y1+1;
b=b-1;
break;
case 2:
break;
}
field[x1][y1]=bank;
}
if(field[x1-1][y1+1] == B){
if(b==1)
{
printf("attack left?:1-yes 2-no");
scanf("%d",&a);
switch(a)
{
case 1:
field[x1][y1]=C;
x1=x1-1;
y1=y1+1;
b=b-1;
break;
case 2:
break;
}}
}
if(b==1)
{
bank=field[x1][y1];
field[x1][y1+1]=bank;
field[x1][y1]=C;

}
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

system("clear");
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
printf ("\n 0 1 2 3 4 5 6 7 \\/");
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

system("clear");
}
}
return 0;
}


/*
#include <stdio.h>
#include <stdlib.h>
#define A 57
#define B 42
#define C 48
int main()
{

    int field[8][8],score_white=0,score_black=0,number_white=0,number_black=0;
    for (int y=0; y<8; y++)
    {
        for (int x=0; x<8; x++)
        {
            field[x][y]=C;
        }
    }
    for(int y=0; y<2; y++)
    {
        for (int x=0; x<8; x++)
        {
            field[x][y]=A;
        }
    }
    for (int y=6; y<8; y++)
    {
        for (int x=0; x<8; x++)
        {
            field[x][y]=B;
        }
    }



    for (int m=1; m<10000; m++)
    {
        for(int q=0; q<8; q++)
        {
            for(int w=0; w<8; w++)
            {
                int number_white=0,number_black=0;
                if (field[q][w]==A)
                {

                    number_white=number_white+1;
                }
                if (field[q][w]==B)
                {

                    number_black=number_black+1;
                }
            }
        }
        if (number_white==0 && number_black==0)
        {
            if(score_white>score_black)
            {
                printf("\nPlayer 1 win!");
                exit(1);
            }
            if(score_black>score_white)
            {


                printf("\nPlayer 2 win!");
                exit(1);
            }
        }

        system("clear");
        printf ("x----------------->y   player 1:%d,player 2:%d\n  0 1 2 3 4 5 6 7  |",score_white,score_black);
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

        if (field[x1][y1]==C )
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
                if(field[x1+1][y1+1]==B)
                {
                    printf("attack right?:1-yes 2-no");
                    scanf("%d",&a);
                    switch(a)
                    {
                    case 1:
                        field[x1][y1]=C;
                        x1=x1+1;
                        y1=y1+1;
                        b=b-1;
                        break;
                    case 2:
                        break;
                    }
                    field[x1][y1]=bank;
                }
                if(field[x1-1][y1+1] == B)
                {
                    if(b==1)
                    {
                        printf("attack left?:1-yes 2-no");
                        scanf("%d",&a);
                        switch(a)
                        {
                        case 1:
                            field[x1][y1]=C;
                            x1=x1-1;
                            y1=y1+1;
                            b=b-1;
                            break;
                        case 2:
                            break;
                        }
                    }
                }
                if(b==1)
                {
                    if(y1==7)
                    {
                        score_white=score_white+1;
                        field[x1][y1]==C;
                    }
                    bank=field[x1][y1];
                    field[x1][y1+1]=bank;
                    field[x1][y1]=C;

                }
            }
        }
        if(n==0)
        {

            if (field[x1][y1]==B)
            {
                bank=field[x1][y1];

                int a,b=1;
                if(field[x1+1][y1-1]==A)
                {
                    printf("attack right?:1-yes 2-no");
                    scanf("%d",&a);
                    switch(a)
                    {
                    case 1:
                        field[x1][y1]=C;
                        x1=x1+1;
                        y1=y1-1;
                        b=b-1;
                        break;
                    case 2:
                        break;
                    }
                    field[x1][y1]=bank;
                }
                if(field[x1-1][y1-1]==A)
                {
                    if(b==1)
                    {
                        printf("attack left?:1-yes 2-no");
                        scanf("%d",&a);
                        switch(a)
                        {
                        case 1:
                            field[x1][y1]=C;
                            x1=x1-1;
                            y1=y1-1;
                            b=b-1;
                            break;
                        case 2:
                            break;
                        }
                        field[x1][y1]=bank;
                    }
                }
                if(b==1)
                {
                    if(y1==0)
                    {
                        score_black=score_black+1;
                        field[x1][y1]=C;
                    }
                    bank=field[x1][y1];
                    field[x1][y1-1]=bank;
                    field[x1][y1]=C;
                }
            }

            system("clear");
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
            printf ("\n 0 1 2 3 4 5 6 7 \\\\");
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

            system("clear");
        }
    }
    return 0;
}
*/
