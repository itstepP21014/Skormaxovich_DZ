#include <stdio.h>
#include <stdlib.h>

int main()
{
    int field [4][4],strochka,stolbec,a;

    for (int i=1;i<4;i=i+1){
    field[1][i]=5;}
    for (int i=1;i<4;i=i+1){
    field [2][i]=5;}
    for (int i=1;i<4;i=i+1){
    field[3][i]=5;}






for (int b=1;b<10;b=b+1){
    printf("   1  2  3\n");
    printf("1 ");
    for (int i=1;i<4;i=i+1){
    printf(" %d ",field[1] [i]);}
    printf("\n");
    printf("2 ");
    for (int i=1;i<4;i=i+1){
    printf(" %d ",field[2] [i]);}
    printf("\n");
    printf("3 ");
    for (int i=1;i<4;i=i+1){
    printf(" %d ",field[3] [i]);}
    printf("\n");


    printf("Enter storchka:");
    scanf("%d",&strochka);
    printf("Enter stolbec:");
    scanf("%d",&stolbec);
    if (b%2==1)
        { a=1;}
    else {a=0;}
    field[strochka][stolbec]=a;
    system("cls");}

    return 0;
}


\\second version 
#include <stdio.h>
#include <stdlib.h>

int main()
{
int strochka,stolbec,a;
char field[4][4]={32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32};
for (int i=1;i<10;i=i+1){
    if (i%2==1)
    {
        a=88;
    }
    else
    {
        a=79;
    }
    printf("  1 2 3\n");

    printf("1 ");

    for (int c=1;c<4;c=c+1){

    printf("%c",field[1][c]);
    if (c<3){
        printf("|");
    }}
    printf("\n -------");

    printf("\n2 ");

    for (int c=1;c<4;c=c+1){

    printf("%c",field[2][c]);
    if (c<3){
        printf("|");
    }}
    printf("\n -------");

    printf("\n3 ");

    for (int c=1;c<4;c=c+1){

    printf("%c",field[3][c]);
    if (c<3){
        printf("|");
    }}

    printf("\nEnter strochka:");

    scanf("%d",&strochka);

    printf("Enter stolbec:");

    scanf("%d",&stolbec);

    if (field [strochka][stolbec]!=32){
        printf("error!)|(yJIUK HE )|(eJIHU4AU!!\a\n");
        exit(1) ;
    }else{
    field [strochka][stolbec]=a;

    system("clear");}}







    return 0;
}
