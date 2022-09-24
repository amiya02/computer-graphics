#include<bits/stdc++.h>
#include<conio.h>
#include<graphics.h>
#define getch() _getch()
using namespace std;
void draw_plot(int x,int y)
{
    int screenWidth=x;
    int screenHeight=y;
    int gd=DETECT,gm;
    initwindow(getmaxwidth(),getmaxheight());
    setcolor(YELLOW);
    line(0,screenHeight/2,screenWidth,screenHeight/2);
    setcolor(YELLOW);

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
    int x1,y1,x2,y2,xc,yc,r;


    int screenWidth=GetSystemMetrics(SM_CXSCREEN);
    int screenHeight=GetSystemMetrics(SM_CYSCREEN);
    draw_plot(screenWidth,screenHeight);
    int midx=screenWidth/2;
    int midy=screenHeight/2;

    cout<<"Enter the circle radius r;";
    cin>>r;
    cout<<"Enter the center";
    cin>>xc>>yc;
    cout<<"enter the line coordinate"<<endl;
    cin>>x1>>y1>>x2>>y2;
    
    xc=midx+xc;
    yc=midy-yc;
    x1=midx+x1;
    x2=midx+x2;
    y1=midy-y1;
    y2=midy-y2;
    
    setcolor(RED);
    setlinestyle(0,0,2);
    circle(xc,yc,r);
    int j,x=0,y=0;
    x=x1;
    y=y1;
    for(int i=x1;i<=x2;i+=20){
        cout<<x<<" "<<y;
        if(x1>=x2 || y1>=y2)
        {
            cleardevice();
            break;
        }
        x=x+20;
        y=y+20;
        setcolor(YELLOW);
        line(x1,y1,x2,y2);
        xc=x;
        yc=y;
        setcolor(GREEN);
        circle(xc,yc,r);
        delay(1000);

        cleardevice();
    }

    setcolor(YELLOW);
        line(x1,y1,x2,y2);
        xc=x1;
        yc=y1;

        setcolor(RED);
        circle(xc,yc,r);

    _getch();
    closegraph();
    return 0;


}