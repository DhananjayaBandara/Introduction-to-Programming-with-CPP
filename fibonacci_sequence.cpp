#include<iostream>
using namespace std;
int main()
{
int n,h;
int g=0;
int f=1;
cout<<"Enter the number of terms : ";
cin>>n;
cout<<"Fibonacci sequence is: ";
for(int i=0;i<n;i++)
{
    cout<<g<<", ";
    h=g+f;
    f=g;
    g=h;


}

return 0;
}
