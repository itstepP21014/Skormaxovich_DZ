#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int x, x1, a=0, b=2;

    printf("Enter number\n:");
    scanf("%d",&x);

    if( 2<=x)
    {


        while(b!=x)
        {
            if(x%b == 0)
            {
                x1=x%b;

               a+=1;
                ++b;
            }
            x1=x%b;
            ++b;

        }

        if(a > 0)
        {
            printf("Number unsimple\n");
        }
        else
        {
            printf("Number simple");
        }

    }


    return 0;
}
