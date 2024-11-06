#include <iostream>
#include<math.h>
#include<iomanip>
using namespace std;
#define PI 3.14159265
int main()
{
double r, s,peri, area;
cout<<"Enter the length from the center to a vertex:";
cin>>r;

s= 2*r*sin(PI/5);
peri=5*s;
area= (5*s*s)/(4*tan(PI/5));
cout<<"S: "<<fixed<<setprecision(2)<<s<<endl;
cout<<"Perimeter: "<<fixed<<setprecision(2)<<peri<<endl;
cout<<"Area: "<<fixed<<setprecision(2)<<area;
return 0;
}
