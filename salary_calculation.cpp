#include<iostream>
using namespace std;
int main()
{
    int b,y,t,bo,com;
cout<<"Month: August Year:2019"<<endl;
cout<<"........................."<<endl;
cout<<"Enter the Base Salary: ";
cin>>b;
cout<<"Enter the Number of Years: ";
cin>>y;
cout<<"Enter the Total sales: ";
cin>>t;
if(y<=5)
    bo=1000;
else
    bo=2000;
if((t>=5000)&&(t<10000))
com=t*3/100;
else
    com=t*6/100;
cout<<"Salary: "<<b+bo+com;

return 0;
}
