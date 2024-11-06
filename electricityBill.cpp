#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
int n;
float a;
string x;
cout<<"Enter user name : ";
cin>>x;
cout<<"Enter total units consumed in the month : ";
cin>>n;

if(n<=50)
    a=n*0.5;
else if(n<=100)
    a=50*0.5+(n-50)*0.75;
else
    a=(50*0.5)+(100*0.75)+(n-150)*1.5;

cout<<"Your Bill Amount is Rs."<<setprecision(2)<<fixed<<a;

return 0;
}
