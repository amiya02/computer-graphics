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
 int x,y,r,xc,yc,gd=DETECT,gm;
 float d;
 cout<<"enter radius"<<endl;
 cin>>r;
 cout<<"enter xc and yc"<<endl;
 cin>>xc>>yc;

 int screenWidth=GetSystemMetrics(SM_CXSCREEN);
     int screenHeight=GetSystemMetrics(SM_CYSCREEN);
     draw_plot(screenWidth, screenHeight);
     
     int midx = screenWidth/2;
     int midy= screenHeight/2;
     xc= midx+xc;
     
     yc= midy-yc;
     
 x=0;
 y=r;
 d=1-r;

 do
 {
   putpixel(xc+x,yc+y,4);
   putpixel(xc+x,yc-y,4);
   putpixel(xc-x,yc+y,4);
   putpixel(xc-x,yc-y,4);
   putpixel(xc+y,yc+x,4);
   putpixel(xc+y,yc-x,4);
   putpixel(xc-y,yc+x,4);
   putpixel(xc-y,yc-x,4);
   if(d<0)
   {
     x=x+1;
     y=y;
     d=d+2*x+1;
   }
   else
    {
     x=x+1;
     y=y-1;
     d=d+2*(x-y)+1;
     }
   }
   while(x<y);
   getch();
   closegraph();

   return 0;
 }


