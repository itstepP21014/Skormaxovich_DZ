#include <stdio.h>
#include <stdlib.h>

int main()
{int n,a=1;
printf("Enter n:");
scanf("%d",&n);
for (int i=1;i<=n;i=i+1) {
    a=a*i;
    }
printf(" %d",a);

    return 0;
}
