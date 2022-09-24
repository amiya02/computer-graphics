#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
void plot(int x,int y){
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
int main()
{
    int screenWidth=GetSystemMetrics(SM_CXSCREEN);
    int screenHeight=GetSystemMetrics(SM_CYSCREEN);
    plot(screenWidth,screenHeight);
    int midx=screenWidth/2;
    int midy=screenHeight/2;
    float xc,yc,r,angle,rad,x,y,sx,r1;
    cin>>xc>>yc;
    cin>>r;
    rad=3.14/180;

    circle(midx+xc,midy-yc,r);

    //scaling
    cout<<"enter the scaling factor";
    cin>>sx;

    r1=r*sx;
    //circle(midx+xc,midy-yc,r1);

    //rotation

    cout<<"Enter the angle";
    cin>>angle;

    x=xc*cos(angle*rad)-yc*sin(angle*rad);
    y=xc*sin(angle*rad)+yc*sin(angle*rad);
     
     setcolor(BLUE);
    circle(midx+x,midx-y,r1);


    /*float x1,y1,x2,y2,angle,rad,xc,yc,xd,yd;

    cin>>x1>>y1>>x2>>y2;
    cout<<"angle";
    cin>>angle;
    rad=3.14/180;
     
     setcolor(BLUE);
     line(midx+x1,midy-y1,midx+x2,midy-y2);

     xc=x1*cos(angle*rad)-y1*sin(angle*rad);
     yc=x1*sin(angle*rad)+y1*cos(angle*rad);
     xd=x2*cos(angle*rad)-y2*sin(angle*rad);
     y2=x2*sin(angle*rad)+y2*cos(angle*rad);

     setcolor(YELLOW);
     line(midx+xc,midy-yc,midx+xd,midy-yd);*/
     






    getch();
    closegraph();
    return 0;
}