#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, a=2;

        printf("Enter the number\n:");
        scanf("%d",&x);

    if(2<=x)
    {
        printf("%d=",x);

        while(x>1)
        {
            if(x%a == 0)
            {
                printf("%d ",a);
                x/=a;
            }
            else
            {
                ++a;
            }
        }
        printf("\n\n");
    }

    return 0;
}
