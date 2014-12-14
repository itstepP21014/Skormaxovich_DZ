#include <stdio.h>
#include <stdlib.h>
int main()
{
int w,h,a,c=42;
printf("write w\n");
scanf ("%d",&w);
printf("write h\n");
scanf ("%d",&h);
while (h!=0)
{
{
for (a=w;a!=0;--a)
{
printf("%c",c);
}
printf("\n");
h-=1;
}
}
return (0);
}
