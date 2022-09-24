#include<graphics.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,(char*)"");
    ShowWindow( GetConsoleWindow(), SW_HIDE );
     
ShowWindow(FindWindow(NULL,"Windows BGI"),SW_MAXIMIZE);
    circle(200,200,100);
    getch();
}
 