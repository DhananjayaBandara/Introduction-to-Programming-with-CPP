#include<iostream>
#include<cmath>
using namespace std;

double distance(int x1,int y1,int x2,int y2)
{
double d;
d=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
return d;
}

double area(int x1,int y1,int x2,int y2,int x3,int y3)
{
double a,b,c,s,A;
a=distance(x1,y1,x2,y2);
b=distance(x1,y1,x3,y3);
c=distance(x2,y2,x3,y3);
s=(a+b+c)/2.0;
A=sqrt(s*(s-a)*(s-b)*(s-c));
return A;
}


int main()
{
cout<<"Enter the coordinates of three vertices of the triangle: "<<endl;
cout<<"(x1,y1) : ";
int x1,x2,x3,y1,y2,y3;
cin>>x1>>y1;
cout<<"(x2,y2) : ";
cin>>x2>>y2;
cout<<"(x3,y3) : ";
cin>>x3>>y3;

cout<<"The area of the triangle is "<<area(x1,y1,x2,y2,x3,y3);
return 0;
}
