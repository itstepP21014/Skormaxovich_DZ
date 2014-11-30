#include <stdio.h>
#include <stdlib.h>

int main()
{
int BbICOTA ,Paguyc;

 double poverhnoct,o6eM;

 double p=3.14;

 printf("enter BbICOTA:");

 scanf("%d",&BbICOTA);

 printf("enter radius:");

 scanf("%d",&Paguyc);

 o6eM=(p*Paguyc*Paguyc*BbICOTA)/3;

 poverhnoct=p*Paguyc*sqrt(Paguyc*Paguyc+BbICOTA*BbICOTA);

 printf("Ploshad poverxnosti S=%.5f\n",poverhnoct);

 printf("Ob'em konusa raven  V=%.5f\n",o6eM);

    return 0;
}
