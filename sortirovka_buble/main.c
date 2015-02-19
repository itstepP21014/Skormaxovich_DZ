#include <stdio.h>
#include <stdlib.h>

#define N 100000
int main()
{


{

int i, j, A[N], c;

for (int i=0;i<N;++i)
    {
        A[i]=rand()%10000;
        printf("%d\n",A[i]);    }
        printf("\n\n\n\n");



for ( i = 0; i < N-1; i ++ ){

  {for ( j = N-2; j >= i; j -- )

      if ( A[j] > A[j+1] )

        {

        c = A[j]; A[j] = A[j+1];

        A[j+1] = c;

        }}}

printf("otsortirovan array: ");

for ( i = 0; i < N; i ++ ){

printf("%d ", A[i]);}

}

    return 0;
}
