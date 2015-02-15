#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[6]={1,2,3,4,5},orray[6]={6,7,8,9,10},a,b,c,d,e,f;

  for (int i=0;i<5;i=i+1){
    printf(" %d ",array[i]);
  }
  printf("\n");
  for (int i=0;i<5;i=i+1){
    printf(" %d ",orray[i]);


}

printf("\n\n");

for (int n=1;n<4;n=n+1)
{   a=array[0];
    b=a;
    for (int i=0;i<4;i=i+1){

    c=array[i];
    array[i]=array[i+1];


printf(" %d ",array[i]);

}
array[4]=a;
printf(" %d \n",a);

}

printf("\n");
for (int n=1;n<4;n=n+1)
{   d=orray[0];
    e=d;
    for (int i=0;i<4;i=i+1){

    f=orray[i];
    orray[i]=orray[i+1];


printf(" %d ",orray[i]);
}orray[4]=d;
printf(" %d \n",d);
}

return 0;
}
