#include <stdio.h>
#include <stdlib.h>
char max(int,int,int);
int main()
{

    char p;
    int q,w,e;
    printf("Enter a,b,c:");
    scanf("%d %d %d",&q,&w,&e);
    p=max(q,w,e);
    printf("%s",p);
}
char max (int a,int b,int c)
{

    char r;

    if (a+b>c)
    {


        r="a+b>c";
    }
    else
    {
        r="a+b<c";
    }
    return r;
}
