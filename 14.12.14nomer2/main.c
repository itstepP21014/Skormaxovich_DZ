#include <stdio.h>
#include <stdlib.h>
int main()
{
int a,b,c,result,d;
printf("write 2 numbers\n");
scanf ("%d",&a);
scanf ("%d",&b);
if (a>b)
{
c=a;
while (d!=0)
{
result=a;
d=a%b;
a+=c;
}
}
else
{if (a<b)
{
c=b;
while (d!=0)
{
result=b;
d=b%a;
b+=c;
}
}
else
{
result=b;
}
}
printf ("HOK is %d",result);
return 0;
}
