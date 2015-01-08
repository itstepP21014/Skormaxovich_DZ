#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int a,b,i=0,y;
    srand(time(NULL));
    do{
    a=rand()%100;

    do
    {
        printf("enter numb   ");
        scanf("%d",&b);
        i++;
        if(a>b)
        {
            printf("bolshe\n");
        }
        else if(a<b)
        {
            printf("men'she\n");
        }
    }
    while(!(a==b));
    printf("good %c\n my number %d  attempts %d",2,a,i);
    printf("esli budesh vvedi 1 esli net to q =");
    }while(scanf("%d",&y));

    return 0;
}
