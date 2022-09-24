#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main(){
    int x1,y1,x2,y2;
    int gd=DETECT,gm;
    initwindow(getmaxwidth(),getmaxheight());

cin>>x1>>y1>>x2>>y2;
bar3d(x1,y1,x2,y2,5,1);
getch();
closegraph();
}