#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b,c,d,e,f;
printf("Enter a<=999:");
scanf("%d",&a);
b=a/100;
c=a/10;
d=c%10;
e=a%10;
f=b+d+e;
printf(" %d ",f);
    return 0;
}
