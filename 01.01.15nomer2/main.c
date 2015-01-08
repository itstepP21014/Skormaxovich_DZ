#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x, a=1e-3, b, c;
    int i;
    printf(" -----------------------------------\n");
    printf("|   x   |   my  |  math |    diff   |\n");
    printf(" -----------------------------------\n");
    for(x=-2;x<=2;x+=0.1){
        b = 0; c = 1; i = 0;
        while(fabs(c) > a){
            b += c;
            c *= x / ++i;
        }
        printf("| %5.2f | %5.3f | %5.3f | %9.7f |\n", x, b, exp(x), fabs(b - exp(x)));
    }
    printf(" -----------------------------------\n");
    return 0;
}
