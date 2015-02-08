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
