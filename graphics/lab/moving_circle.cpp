#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>
#define getch() _getch();
using namespace std;
int main()
{
    int gd=DETECT,gm;
    initwindow(getmaxwidth(),getmaxheight());
    int xc,yc,x1,x2,r,i,x=0,y=0,y1,y2;
    cout<<"xc,yc:";
    cin>>xc>>yc;
    cout<<"r:";
    cin>>r;
    cout<<"x1,y1:";
    cin>>x1>>y1;
    cout<<"x2,y2";
    cin>>x2>>y2;

     setcolor(RED);
     circle(xc,yc,r);
     x=x1;
     y=y1;
     for(i=x;i<=x2;i+=20)
     {
        cout<<x<<" "<<y;
        if(x1>=x2 || y1>=y2)
        {
            cleardevice();
            break;
        }
        x=x+20;
        y=y+20;
        setcolor(BLUE);
        line(x1,y1,x2,y2);
        xc=x;
        yc=y;
        setcolor(RED);
        circle(xc,yc,r);
        delay(500);
        cleardevice();

     }
      setcolor(BLUE);
        line(x1,y1,x2,y2);
        xc=x1;
        yc=y1;
        setcolor(RED);
        circle(xc,yc,r);

    _getch();
    closegraph();
    return 0;
}