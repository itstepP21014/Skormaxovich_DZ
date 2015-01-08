#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n,a,b=1,c=1;

    scanf("%d",&n);

    for(int i=1 ; i<=n; i++)
    {
        if(i==1)
        {
            printf("1 ");
        }
        else if(i==2)
        {
            printf("1 ");
        }
        else
        {
            a=b+c;
            printf("%d ",a);

            c=b;
            b=a;
        }

    }
    return 0;
}
