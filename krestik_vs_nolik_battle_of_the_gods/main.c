#include <stdio.h>
#include <stdlib.h>

int main()
{
int field[4][4]={5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5},strochka,stolbec,a;
for (int i=1;i<10;i=i+1){
    if (i%2==1)
    {
        a=1;
    }
    else
    {
        a=0;
    }
    printf("  1  2  3\n");
    printf("1 ");
    for (int c=1;c<4;c=c+1){
    printf("%d  ",field[1][c]);}
    printf("\n2 ");
    for (int c=1;c<4;c=c+1){
    printf("%d  ",field[2][c]);}
    printf("\n3 ");
    for (int c=1;c<4;c=c+1){
    printf("%d  ",field[3][c]);}
    printf("\nEnter strochka:");
    scanf("%d",&strochka);
    printf("Enter stolbec:");
    scanf("%d",&stolbec);
    field [strochka][stolbec]=a;
    system("cls");}







    return 0;
}
