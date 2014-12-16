#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int a,b,c,d,e,f,n=3;
printf("Enter a>=2:");
scanf("%d",&a);
b=a%2;
printf(" %d ",b);
if (b==1)
{
    c=a+1;
    printf(" %d ",c);
    f=c/2;
    printf(" %d ",f);
    for (int i=0;i<=f;i=i+1)
       n=n+1;
       d=f/n;
       printf(" %d ",d);
    if (d==e)
    {
        printf("neprostoe");
    }
    else {
        printf("prostoe");
    }

    }
    else
    {
        printf("neprostoe");
    }
}
