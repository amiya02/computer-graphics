#include<bits/stdc++.h>
#include<conio.h>
#include<graphics.h>
#define getch() _getch()
using namespace std;
void draw_plot(int x,int y)
{
    int screenWidth=x;
    int screenHeignt=y;
    int gd=DETECT,gm;
    initwindow(getmaxwidth(),getmaxheight());
    setcolor(YELLOW);
    line(0,screenHeignt/2,screenWidth,screenHeignt/2);
    setcolor(YELLOW);

    line(screenWidth/2,0,screenWidth/2,screenHeignt);

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
    int x1,y1,x2,y2,x3,y3,sx,sy,x4,x5,x6,y5,y4,y6;


    int screenWidth=GetSystemMetrics(SM_CXSCREEN);
    int screenHeignt=GetSystemMetrics(SM_CYSCREEN);
    draw_plot(screenWidth,screenHeignt);
    int midx=screenWidth/2;
    int midy=screenHeignt/2;

    cout<<"enter the triangle coordinate"<<endl;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    cout<<"Enter the scalling coordinates";
    cin>>sx>>sy;

    x1=midx+x1;
    x2=midx+x2;
    x3=midx+x3;
    y1=midy-y1;
    y2=midy-y2;
    y3=midy-y3;
    setcolor(RED);
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);

    x1=x1*sx;
    y1=-y1*sy;
    x2=x2*sx;
    y2=y2*sy;
    x3=x3*sx;
    y3=y3*sy;

    setcolor(BLUE);
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);



    _getch();
    closegraph();
    return 0;


}