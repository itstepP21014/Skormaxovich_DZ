#include <stdio.h>
#include <stdlib.h>

int main()
{ int x,p,proizvedenie;
double a;
scanf("%d",&x);

scanf("%d",&p);

proizvedenie=x;
a=1/x;
if (p>=0)
{
    for(int i=1;i<p;i=i+1)
    { proizvedenie=proizvedenie*x;


    }
}
    else
    {
        a=a/x;


    }



 printf(" %d ",proizvedenie);
 printf(" %d  ",a);
return 0;
}
