﻿# Домашние работы
﻿
﻿
﻿
﻿#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int field[10][10],c=1;
    for (int a=0;a<10;a=a+1){
        for (int b=0;b<10;b=b+1){
            field[a][b]=rand()%1+1;
            printf("%d ",field[a][b]);
        }printf("\n");
    }
    for (int a=0;a<10;a=a+1){
        for (int b=0;b<10;b=b+1){
                for (int i=1;i<11;i=i+1){
    if(field[a][b]==field[a+i][b+i]){
        c=c+1;
    }


       }printf("%d %d in array\n",c,field[a][b]); }}


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int field[10][10],c=1;
    for (int a=0;a<10;a=a+1)
        {
            for (int b=0;b<10;b=b+1)
            { field[a][b]=rand()%1+1;
            printf("%d ",field[a][b]);
            }
            printf("\n");
        }
        for (int a=0;a<10;a=a+1)
            {
                for (int b=0;b<10;b=b+1)
                {
                    for (int i=1;i<11;i=i+1)
                    {
                        if(field[a][b]==field[a+i][b+i])
                        {
                            c=c+1;
                        }
                        printf("%d %d in array\n",c,field[a][b]);
                    }
                }
            }
            return 0;
}


    return 0;
}



#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ukr[5][5]={1,2,3,4,5,6,7,8,9,10,11,12,12,1,10,3,5,8,7,1,5,2,5,11,9};
    for (int a=0;a<5;a=a+1){
        for(int b=0;b<5;b=b+1){

            printf("%d ",ukr[a][b]);
        }printf("\n");
    }
printf("\n\n\n");
   for (int a=0;a<5;a=a+1){
        for(int b=0;b<5;b=b+1){

   switch(ukr[a][b]){
   case 1:
   case 2:
   case 3:
    ukr[a][b]=2;
    break;
   case 4:
   case 5:
   case 6:
    ukr[a][b]=3;
    break;
   case 7:
   case 8:
   case 9:
    ukr[a][b]=4;
    break;
   case 10:
   case 11:
   case 12:
    ukr[a][b]=5;
    break;
        }}}
        for (int a=0;a<5;a=a+1){
        for(int b=0;b<5;b=b+1){
                printf(" %d ",ukr[a][b]);}printf("\n");}

    return 0;
}



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
}array[4]=a;
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


#define _XOPEN_SOURCE_EXTENDED
#define _POSIX_C_SOURCE 199309L

#include <sys/ioctl.h>
#include <signal.h>
#include <ncurses.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

void treatSigWinch(int signo);
void initialiseProgram();
enum Colors{normal,green,red};


int main()
{
    initialiseProgram();

    attron(COLOR_PAIR(red));
    printw("Hello my litle HELLLL!");
    attroff(COLOR_PAIR(1));
    refresh();
    getch();
    attron(A_BLINK|A_BOLD);
    move(0,0);
    printw("Hello my lit");
    attron(A_BLINK|A_BOLD);
    refresh();
    getch();
    endwin();
    return 0;
}
void initialiseProgram()
{
    setlocale(LC_ALL,"");
    initscr();
    signal (SIGWINCH,treatSigWinch);
    if(has_colors() == FALSE)
    {
        endwin();
        fprintf(stderr,"no colors\n");
        exit(1);
    }
    cbreak();
    noecho();
    curs_set(0);
    start_color();
    init_pair(normal,COLOR_WHITE, COLOR_BLACK);
    init_pair(green,COLOR_GREEN,COLOR_BLACK);
    init_pair(red,COLOR_RED,COLOR_BLACK);


//kakoito kometarii


}
void treatSigWinch(int signo)
{
    struct winsize size;
    ioctl(fileno(stdout), TIOCGWINSZ, (char *) &size);
    resizeterm(size.ws_row,size.ws_col);
}











#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#define ARR 10

bool checkSorting(int mas[], int size);
void replacement(int mas[], int b);

int main()
{
int mas[ARR], i;
printf("\n\nEnter the array: \n\n");
for (i=0; i<ARR; ++i)
{
scanf ("%d", &mas[i]);
}
//void function;
if (checkSorting(mas, ARR))
printf ("\n\nThe array is otsortirovan\n");
else
printf ("\n\nThe array isn`t otsortirovan");
return 0;
}
bool checkSorting(int mas[], int size)
{
    int a=0;
    for(int i=0;i<size;++i)
    {
        if (mas[i]<mas[i+1])
            a+=1;
    }
    if (a==ARR)
        return 1;
    else return 0;
}
void menyaem_randomnieye_chisla(int mas[],int size)
{
 int arr1=rand()%size;
 int arr2=rand()%size;
 int b=0;
 b=mas[arr1];
 mas[arr1]=mas[arr2];
 mas[arr2]=b;


}



#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>
#include <stdbool.h>
#include <SDL2/SDL2_gfxPrimitives.h>
#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480
int main()
{
    if(SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        fprintf(stderr, "SDL_Init Error: %s\n", SDL_GetError());
        exit(1);
    }

    SDL_Window *win = SDL_CreateWindow("Hello World!", 100, 100,
                                       SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

    if(win == NULL)
    {
        fprintf(stderr, "SDL_CreateWindow Error: %s\n", SDL_GetError());
        exit(1);
    }

    SDL_Renderer *ren = SDL_CreateRenderer(win, -1,
                                           SDL_RENDERER_ACCELERATED
                                           | SDL_RENDERER_PRESENTVSYNC);

    if(ren == NULL)
    {
        SDL_DestroyWindow(win);
        fprintf(stderr, "SDL_CreateRenderer Error: %s\n",
                SDL_GetError());
        SDL_Quit();
        exit(1);
    }

    SDL_Surface *bmp = SDL_LoadBMP("hello.bmp");

    if(bmp == NULL)
    {
        SDL_DestroyRenderer(ren);
        SDL_DestroyWindow(win);
        fprintf(stderr, "SDL_LoadBMP Error: %s\n", SDL_GetError());
        SDL_Quit();
        exit(1);
    }

    SDL_Texture *tex = SDL_CreateTextureFromSurface(ren, bmp);
    SDL_FreeSurface(bmp);

    if(tex == NULL)
    {

        SDL_DestroyWindow(win);
        fprintf(stderr, "SDL_CreateTextureFromSurface Error: %s\n",
                SDL_GetError());
        SDL_Quit();
        exit(1);
    }


    SDL_RenderClear(ren);

    SDL_RenderCopy(ren, tex, NULL, NULL);

    bool quit = false;
    SDL_Event e;
    int x=10,y=10;

    while (!quit)
    {
        while(SDL_PollEvent(&e)!=0)
        {
            if(e.type==SDL_QUIT)
            {
                quit=true;
            }


            if(e.type==SDL_KEYDOWN)
            {
                SDL_KeyboardEvent kEvent=e.key;
                if(kEvent.keysym.scancode==SDL_SCANCODE_A){
                    x=(x-1+SCREEN_WIDTH)% SCREEN_WIDTH;}
                     if(kEvent.keysym.scancode==SDL_SCANCODE_D){
                    x=(x+1+SCREEN_WIDTH)% SCREEN_WIDTH;}
                    if(kEvent.keysym.scancode==SDL_SCANCODE_W){
                    y=(y-1+SCREEN_WIDTH)% SCREEN_HEIGHT;}
                    if(kEvent.keysym.scancode==SDL_SCANCODE_S){
                    y=(y+1+SCREEN_WIDTH)% SCREEN_HEIGHT;}
            }
        }
        SDL_SetRenderDrawColor(ren,0x00,0x00,0x00,0xFF);
        SDL_RenderClear(ren);
        SDL_SetRenderDrawColor(ren,0xFF,0xFF,0xFF,0xFF);
        SDL_RenderDrawLine(ren,x,y,SCREEN_WIDTH/2,SCREEN_HEIGHT/2);

        SDL_RenderPresent(ren);
    }


    SDL_DestroyTexture(tex);
    SDL_DestroyRenderer(ren);
    SDL_DestroyWindow(win);
    SDL_Quit();

    return 0;
}





