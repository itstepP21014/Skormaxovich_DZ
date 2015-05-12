#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int NOD(int,int);
int NOK(int,int);

int main()
{

    int a,b,c,d;
    printf("Enter 2 numbers:");
    scanf("%d %d",&a,&b);
    c=NOD(a,b);
    d=NOK(a,b);
  printf("a=%d,b=%d,NOD=%d,NOK=%d",a,b,c,d);
  return 0;
}
 int NOD(int a,int b)
 {
    if (b==0)
    {
        return a;
    }
    while (a%b!=0)
    {
        int c=a%b;
        a=b;
        b=c;
    }
    return b;
    }
int NOK (int a,int b)
{
    return a*b/NOD(a,b);
}














