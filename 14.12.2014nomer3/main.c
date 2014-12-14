#include <stdio.h>
#include <stdlib.h>
int main()
{
int c=0,d=1,n;
double a,b;
printf("Input number: ");
scanf("%d",&n);
for(int i=0;i<n;i++){
c = c + d;
d = c - d ;
a=c/d;
b=d/c;
printf("/n%d %d ",a,b);
}
return 0;

}

