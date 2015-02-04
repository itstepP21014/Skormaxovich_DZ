#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char mas[]="++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++.>+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++.";
    char arr[30000];
    for (int i=0;i<30000;i=i+1)
        arr[i]='0';
    int k=0;
    for (int i=0;i<strlen(mas);i=i+1)
    {
        switch(mas[i])
        {
            case '!':arr[k]=' ';break;
            case '>':k=k+1;break;
            case '<':k=k-1;break;
            case '+':arr[k]=arr[k]+1;break;
            case '-':arr[k]=arr[k]-1;break;
            case '.':putchar(arr[k]);break;
            case ',':arr[k]=getchar();
            }
    }



    return 0;
}
