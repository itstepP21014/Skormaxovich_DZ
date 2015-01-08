#include <stdio.h>
#include <stdlib.h>

int main()
{


    int i, j, a;

    printf("Enter the number\n:");
    scanf("%d",&a);

    int center = a / 2;
    for(i = 0; i < a; i++)
    {
        for(j = 0; j < a; j++)
        {
            if(i <= center)
            {
                if(j >= center - i && j <= center + i)
                {
                    printf("#");
                }
                else
                {
                    printf(" ");
                }
            }
            else
            {
                if(j >= center + i - a + 1 && j <= center - i + a - 1)
                {
                    printf("#");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
