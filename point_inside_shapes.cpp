#include<iostream>
#include<cmath>
#include<string>
using namespace std;


float distance(int x1,int y1,int x2,int y2)
{
float d;
d=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
return d;
}

char insideCircle(int x,int y,int r)
{
float dis;
dis=distance(x,y,0,0);
char v;
if(dis>r)
{
v='F';
}
else
v='T';
return v;

}


char insideRect(int x,int y,int w,int h)
{
char r;
if((x<w)&&(x>-w)&&(y<h)&&(y>-h))
r='T';
else
r='F';
return r;
}


int main()
{
cout<<"Enter the radius of the circle: ";
int r;
cin>>r;
cout<<"Enter the width of the rectangle: ";
int w;
cin>>w;
cout<<"Enter the height of the rectangle: ";
int h;
cin>>h;
cout<<"Enter the point coordinates (x,y): ";
int x;
int y;
cin>>x>>y;

char c;
c=insideCircle(x,y,r);
char rect;
rect=insideRect(x,y,w,h);
if(c=='T')
cout<<"The given point inside the circle."<<endl;
else
cout<<"The given point outside the circle."<<endl;

if(rect=='T')
cout<<"The given point inside the rectangle."<<endl;
else
cout<<"The given point outside the rectangle."<<endl;

return 0;
}
