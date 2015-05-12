#include <stdio.h>
#include <stdlib.h>
double stepen(double a,int step);
int main()
{
    double a,b;
    int step;
    printf("Enter number:");
    scanf(" %f",&a);
     printf("Enter stepen:");
     scanf(" %d",&step);
    b=stepen(a,step);
    printf("%f",b);
    return 0;
}
double stepen(double a,int step)
{
    double c;
    c=a;
for (int i=0;i<=step;i=i+1)
{
    c=c*a;
}
return c;
}
