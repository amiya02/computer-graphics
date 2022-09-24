
#include<iostream>
#include<conio.h>
#include<graphics.h>
using namespace std;
void draw_plot(int x,int y){
    int screenWidth=x;
    int screenHeight=y;
    
      int gd=DETECT, gm;
     //initgraph(&gd, &gm, (char*)" ");
     initwindow(getmaxwidth(),getmaxheight());
     
     
     setcolor(YELLOW);
     line(0,screenHeight/2, screenWidth,screenHeight/2 );
     setcolor(YELLOW);
     line(screenWidth/2,0, screenWidth/2,screenHeight );
  
     for(int i= x/2+20; i<=x;i+=20){
        for(int j=y/2+20;j<=y;j+=20){
            setcolor(DARKGRAY);
			line(0,j,x,j);
			line(i,0,i,y);
        }
     } 

     for(int i= x/2-20; i>=0;i-=20){
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
    draw_plot(getmaxwidth(),getmaxheight());
    int midx=screenWidth/2;
    int midy=screenHeight/2;

    float rx,ry,xc,yc,p1,p2,dx,dy,x,y;
    cout<<"Enter the value of rx,ry:";
    cin>>rx>>ry;
    cout<<"enter the value of center:";
    cin>>xc>>yc;
    x=0;
    y=ry;
    dx=(2*ry*ry)*x;
    dy=(2*rx*rx)*y;

    
    //region 1

    p1=(ry*ry)-(rx*rx*ry)+(0.25*rx*rx);
    while(dx<dy)
    {
        putpixel(midx+(xc+x),(screenHeight)-(yc+y),RED);
        putpixel(midx+(xc+x),(screenHeight)-(yc-y),RED);
        putpixel(midx+(xc-x),(screenHeight)-(yc+y),RED);
        putpixel(midx+(xc-x),(screenHeight)-(yc-y),RED);
        if(p1<0)
        {
            x=x+1;
            y=y;
            dx=dx+(2*ry*ry);
            p1=p1+dx+(ry*ry);
        }
        else{
            x=x+1;
            y=y-1;
           dx=dx+(2*ry*ry);
           dy=dy-(2*rx*rx);
           p1=p1+dx-dy+(ry*ry);
        }
    }

    //REgion 2
    p2=(ry*ry)*(x+0.5)*(x+0.5)+(rx*rx)*(y-1)*(y-1)-(rx*rx*ry*ry);

     while(y>=0)
    {
        putpixel(midx+(xc+x),screenHeight-(yc+y),RED);
        putpixel(midx+(xc+x),screenHeight-(yc-y),RED);
        putpixel(midx+(xc-x),screenHeight-(yc+y),RED);
        putpixel(midx+(xc-x),screenHeight-(yc-y),RED);
        if(p2>0)
        {
            x=x;
            y=y-1;
            dy=dy-(2*rx*rx);
            p2=p2-dy+(rx*rx);
        }
        else{
            x=x+1;
            y=y-1;
           dx=dx+(2*ry*ry);
           dy=dy-(2*rx*rx);
           p2=p2+dx-dy+(rx*rx);
        }
    }

    getch();
    closegraph();

}