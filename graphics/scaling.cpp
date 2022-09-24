#include<iostream>
#include<graphics.h>
#include<conio.h>
using namespace std;
int gd=DETECT,gm;
int n, xs[100],ys[100],i,sfx,sfy;
void draw();
void scalling();
int main()
{
    cout<<"Enter the number of sides of polygon"<<endl;
    cin>>n;
    cout<<"Enter the coordinates x and y"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>xs[i]>>ys[i];
    }
    cout<<"Enter the scalling factor:"<<endl;
    cin>>sfx>>sfy;
    //initgraph(&gd,&gm,(char*)"");
    initwindow(getmaxwidth(),getmaxheight());
    //drawing original
    setcolor(YELLOW);
    draw();
    //doing scalling
    scalling();
    setcolor(BLUE);
    draw();
    getch();

    return 0;
}
void draw()
{
    for ( i = 0; i < n; i++)
    {
        line(xs[i],ys[i],xs[(i+1)%n],ys[(i+1)%n]);
    }
    
}
void scalling()
{
   for(i=0;i<n;i++)
   { 
    xs[i]=xs[0]+(int)((float)(xs[i]-xs[0]*sfx));
    ys[i]=ys[0]+(int)((float)(ys[i]-ys[0]*sfy));

   } 
}