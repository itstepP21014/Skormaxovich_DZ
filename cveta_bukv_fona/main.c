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
