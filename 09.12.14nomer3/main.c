#include <stdio.h>
#include <stdlib.h>

int main()
{ printf("write n ");
int n,max,a,min;
scanf("%d",&n);
scanf("%d, %d",&max,&min);
for (int i=1;i<n;i++)
scanf("%d",&a);
if(n>0)
    if (a>max)
{
    max=a;
    printf("max %d",max);

}
else
{
    min=a;
    printf("min %d",min);
}
printf("min %d",min);
  return 0;
}
