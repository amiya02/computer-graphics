#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
void draw_plot(int x ,int y){
    int screenWidth=x;
    int screenHeight=y;

    int gd=DETECT,gm;
    initwindow(getmaxwidth(),getmaxheight());

    line(0,screenHeight/2,screenWidth,screenHeight/2);
    line(screenWidth/2,0,screenWidth/2,screenHeight);

    for(int i=x/2+20;i<=x;i+=20){
        for(int j=y/2+20;j<=y;j+=20){
            setcolor(DARKGRAY);
            line(0,j,x,j);
            line(i,0,i,y);
        }
    }
    for(int i=x/2-20;i>=0;i-=20){
        for(int j=y/2-20;j>=0;j-=20){
            setcolor(DARKGRAY);
            line(0,j,x,j);
            line(i,0,i,y);
        }
    }
}
int main(){
    int r,xc,yc;
    int screenWidth=GetSystemMetrics(SM_CXSCREEN);
    int screenHeight=GetSystemMetrics(SM_CYSCREEN);

    draw_plot(screenWidth,screenHeight);
    int midx=screenWidth/2;
    int midy=screenHeight/2;
    cout<<"enter the center:";
    cin>>xc>>yc;
    cout<<"Enter the radius:";
    cin>>r;

//before reflection
setcolor(BLUE);
circle(midx+xc,midy-yc,r);
outtextxy(midx+xc,midy-yc+10,"before reflection");
//After reflection
xc=xc;
yc=-yc;
setcolor(GREEN);
circle(midx+xc,midy-yc,r);
outtextxy(midx+xc,midy-yc-10,"after reflection");  



    getch();
    closegraph();

}