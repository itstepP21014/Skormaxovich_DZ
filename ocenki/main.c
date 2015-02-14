#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ukr[5][5]={1,2,3,4,5,6,7,8,9,10,11,12,12,1,10,3,5,8,7,1,5,2,5,11,9};
    for (int a=0;a<5;a=a+1){
        for(int b=0;b<5;b=b+1){

            printf("%d ",ukr[a][b]);
        }printf("\n");
    }
printf("\n\n\n");
   for (int a=0;a<5;a=a+1){
        for(int b=0;b<5;b=b+1){

   switch(ukr[a][b]){
   case 1:
   case 2:
   case 3:
    ukr[a][b]=2;
    break;
   case 4:
   case 5:
   case 6:
    ukr[a][b]=3;
    break;
   case 7:
   case 8:
   case 9:
    ukr[a][b]=4;
    break;
   case 10:
   case 11:
   case 12:
    ukr[a][b]=5;
    break;
        }}}
        for (int a=0;a<5;a=a+1){
        for(int b=0;b<5;b=b+1){
                printf(" %d ",ukr[a][b]);}printf("\n");}

    return 0;
}
