#include <stdio.h>
#include <stdlib.h>

int main()
{  int a;
printf("Enter the hours a:");
scanf("%d",&a);
int b;
printf("Enter the minutes b:");
scanf("%d",&b);
int c;
printf("Enter the seconds c:");
scanf("%d",&c);
printf("%02d : %02d : %02d\n",a,b,c);
return 0;
}
